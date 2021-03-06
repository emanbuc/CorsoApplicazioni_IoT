#include "arduino_secrets.h"
/* 
  Sketch generated by the Arduino IoT Cloud Thing "Untitled 2"
  https://create.arduino.cc/cloud/things/c42cb7d2-7fff-4581-aede-d456e145f39a 

  Arduino IoT Cloud Variables description

  The following variables are automatically generated and updated when changes are made to the Thing

  bool led;

  Variables which are marked as READ/WRITE in the Cloud Thing will also have functions
  which are called when their values are changed from the Dashboard.
  These functions are generated with the Thing and added at the end of this sketch.
*/

#include "thingProperties.h"

int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 1000;


void setup() {
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500); 
  pinMode(LED_BUILTIN, OUTPUT);
  // Initialize serial and wait for port to open:

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here 
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if(led==1){ //On NodeMCU PIN LOW =>LED_BUILTIN ON
      digitalWrite(LED_BUILTIN, LOW);
      Serial.print("LOW \n");
    }else{
      //On NodeMCU PIN HIGH =>LED_BUILTIN OFF
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.print("HIGH \n");
    }

  }
}

/*
  Since Led is READ_WRITE variable, onLedChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onLedChange()  {
  // Add your code here to act upon Led change
  Serial.print("onLedChange:");
  Serial.print(led);
  Serial.print("\n");
}
