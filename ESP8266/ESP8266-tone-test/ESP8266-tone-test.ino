/*
  ESP8266 Blink by Simon Peter
  Blink the blue LED on the ESP-01 module
  This example code is in the public domain

  The blue LED on the ESP-01 module is connected to GPIO1
  (which is also the TXD pin; so we cannot use Serial.print() at the same time)

  Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/
const int SPEAKER_PIN = D6; //Pin D6 of NodeMCU Dev Board

int frequency=1000; //Specified in Hz
int timeOn=1000; //specified in milliseconds
int timeOff=1000; //specified in millisecods

void setup() {
  pinMode(SPEAKER_PIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}


void loop(){
 
   tone(SPEAKER_PIN, frequency);
   delay(timeOn);
   noTone(SPEAKER_PIN);
   delay(timeOff);
}
