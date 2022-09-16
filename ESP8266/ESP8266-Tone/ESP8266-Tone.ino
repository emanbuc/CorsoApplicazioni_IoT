/*
  Corso Applicazioni IoT
  https://emanbuc.github.io/CorsoApplicazioni_IoT/
  https://github.com/emanbuc/CorsoApplicazioni_IoT

  ESP8266 Blink Wihout Delay and with serial log

  Blink builtin LED on NodeMCU 1.0 compatible development board.
  Please note that the led in connected in "Sink mode" and the logic is inverted:
  HIGH turns the LED off while LOW turns it on.


  SEE https://www.geekering.com/categories/embedded-sytems/esp8266/ricardocarreira/esp8266-nodemcu-create-a-melody/
*/

int freq = 1000;
int f1 = 200; //frequenza iniziale
int f2 = 300; //freq finale
int deltaF = 1; //pendenza curva frequenza/tempo Hz/mS
const int LED_PIN = 2; //LED_BUILTIN ==2
const bool CONSOLE_DEBUG = true;

int pulseState = LOW; //square wave pulse status LOW/HIGH

//microseconds timer counters
unsigned long previousMicro = 0;
unsigned long currentMicros = 0;

void setup() {
  Serial.begin(9600); //Init serial port at 9600 bbs
  delay(200); // wait for serial init
  pinMode(D6, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void playTonePWM(int _pin, int _frequency, int _length) {
  pinMode(_pin, OUTPUT);
  analogWriteFreq(_frequency);
  analogWrite(_pin, 512);
  delay(_length);
  analogWrite(_pin, 0);
  pinMode(_pin, INPUT);
}
void digitalWriteTone(int pin, int freq) {
  float period = 1000.0 / freq; //milliseconds
  float periodMicros = period * 1000;
  float pulseDuration = 0.5 * periodMicros; //pulseDuration in microseconds

  if (CONSOLE_DEBUG) {
    Serial.println(" ---- start ----");
    Serial.print("Pulse pulseDuration [microseconds]: ");
    Serial.println(pulseDuration);
    Serial.print("Period [ms]: ");
    Serial.println(period);
    Serial.print("frequency [Hz]: ");
    Serial.println(freq);
  }

  currentMicros = micros();
  if (currentMicros - previousMicro >= pulseDuration) {
    previousMicro = currentMicros;
    if (pulseState == LOW) {
      pulseState = HIGH;  // Set the pin in HIGH state
    } else {
      pulseState = LOW;  // Set the pin in LOW
    }
    digitalWrite(D6, pulseState);
  }
}
void loop() {
  digitalWriteTone(D6, freq);
  /*for (int i = f1; i < f2; i = i + deltaF) {
    tone(D6, f1 + i, 1);
  }*/
}
