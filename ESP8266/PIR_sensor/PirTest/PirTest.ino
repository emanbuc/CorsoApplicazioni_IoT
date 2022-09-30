int pirInputPin = D7; // for ESP8266 NodeMCU DevBoard
int pirState = LOW;
int alarmOut = LED_BUILTIN;
long uptime = 0;
int STARTUP_TIME = 60000; // 1 minuto


void setup() {
  // put your setup code here, to run once:
  pinMode(pirInputPin,INPUT);
  pinMode(alarmOut,OUTPUT);
  
  Serial.begin(9600);
  delay(200);
  Serial.println("SERIAL START");
}

void loop() {
  // put your main code here, to run repeatedly:
  uptime = millis();
  if(uptime > STARTUP_TIME ){
    pirState = digitalRead(pirInputPin);
      if(pirState == HIGH){
        Serial.println("pir InputPin PIR HIGH");
        digitalWrite(alarmOut,HIGH);
      }else{
        digitalWrite(alarmOut,LOW);
        //Serial.println("pir InputPin PIR LOW");
      }
  }


  delay(20); 
}
