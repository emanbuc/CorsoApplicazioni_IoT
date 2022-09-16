/*
  Corso Applicazioni IoT
  https://emanbuc.github.io/CorsoApplicazioni_IoT/
  https://github.com/emanbuc/CorsoApplicazioni_IoT
   
  ESP8266 Blink 

  Blink builtin LED on NodeMCU 1.0 compatible development board.
  Please note that the led in connected in "Sink mode" and the logic is inverted:
  HIGH turns the LED off while LOW turns it on.
*/

void setup() {
  Serial.begin(9600);
  delay(20);
  Serial.print("La seriale funziona");
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, LOW); // Set the pin in HIGH state and turn the LED on 
  Serial.println("LOW");
  delay(1000);                      // Wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // Set the pin in LOW state and turn the LED off
  Serial.println("HIGH");
  delay(2000);                      // Wait for two second 
  // end of loop code block and loop again
}
