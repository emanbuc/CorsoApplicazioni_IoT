/*
  Corso Applicazioni IoT
  https://emanbuc.github.io/CorsoApplicazioni_IoT/
  https://github.com/emanbuc/CorsoApplicazioni_IoT
   
  ESP8266 Blink Wihout Delay and with serial log

  Blink builtin LED on NodeMCU 1.0 compatible development board.
  Please note that the led in connected in "Sink mode" and the logic is inverted:
  HIGH turns the LED off while LOW turns it on.
*/

int ledState = LOW;

unsigned long previousMillis = 0;
unsigned long currentMillis = 0;
const long interval = 1000;
const int LED_PIN=2; //LED_BUILTIN ==2

void setup() {
  Serial.begin(9600); //Init serial port at 9600 bbs
  delay(100); // wait for serial init
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    Serial.print(interval);
    Serial.println(" ms elapsed. Must change led state.");
    previousMillis = currentMillis;    
    if (ledState == LOW) {
      ledState = HIGH;  // Set the pin in HIGH state and turn the LED on       
    } else {
      ledState = LOW;  // Set the pin in LOW state and turn the LED off
    }
    Serial.print("Led state: ");
    Serial.println(ledState);
    digitalWrite(LED_BUILTIN, ledState);    
  }
}
