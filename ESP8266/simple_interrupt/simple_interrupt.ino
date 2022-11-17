/*Let’s connect a push button to GPIO#12 (D6) on the ESP8266. 
You do not need any pullup for this pin as we will be enabling internal pullup.

The following sketch demonstrates the use of interrupts and the correct way to write an interrupt service routine.

This program watches GPIO#12 (D6) for the FALLING edge. 
In other words, it looks for a voltage change going from logic HIGH to logic LOW that occurs when the button is pressed. 
When this happens the function isr is called. The code within this function counts the number of times the button has been pressed.

Example from: https://lastminuteengineers.com/handling-esp8266-gpio-interrupts-tutorial/

*/
struct Button {
  const uint8_t PIN;
  uint32_t numberKeyPresses;
  bool pressed;
};

Button button1 = {D6, 0, false};

void ICACHE_RAM_ATTR isr() {
  button1.numberKeyPresses++;
  button1.pressed = true;
}

void setup() {
  Serial.begin(115200);
  pinMode(button1.PIN, INPUT_PULLUP);
  attachInterrupt(button1.PIN, isr, FALLING);
}

void loop() {
  if (button1.pressed) {
      Serial.printf("Button has been pressed %u times\n", button1.numberKeyPresses);
      button1.pressed = false;
  }
}