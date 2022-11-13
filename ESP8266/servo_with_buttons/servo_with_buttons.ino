int button = D6;   //pin of the first button
int button1 = D7;  //pin of the second button

#include<Servo.h> //include the servo library
Servo servo; //create a servo object
int pos = 0;  //initial position of the servo
void setup() {
  Serial.begin(9600);
  delay(200);
  // put your setup code here, to run once:
  servo.attach(D1);  //pin used by the servo
  pinMode(button, INPUT_PULLUP);  //define first button as input pullup
  pinMode(button1, INPUT_PULLUP); //define second button as input pullup
  servo.write(90);
  delay(5);
  /*
  INPUT_PULLUP send to arduino LOW signal, so, when you press the button, you send a LOW signal to arduino
  */
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == LOW) { //if Value read of the button ==LOW:
    pos=pos+1;  //increases the value of the "pos" variable each time the push button of the left is pressed
    

    if(pos > 180){
      pos = 180;      
    }

    Serial.print("POS ++: ");
    Serial.println(pos);

    servo.write(pos); //servo goes to variable pos
    delay(5); //5 milliseconds of delay

  }
  if (digitalRead(button1) == LOW) { //if Value read of the button ==LOW:
    pos=pos-1;  //decreases the value of the "pos" variable each time the push button of the right is pressed    

    if(pos < 0){
      pos = 0;
    }

    Serial.print("POS  --: ");
    Serial.println(pos);

    servo.write(pos); //servo goes to variable pos    
    delay(5);        

  }
}