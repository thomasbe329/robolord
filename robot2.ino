#include <Servo.h>

Servo leftServo;
Servo rightServo;

char msg = ' ';

void setup()
{
  Serial.begin(9600);
  leftServo.attach(9);
  rightServo.attach(10);
}

void loop()
{
  while(Serial.available()) {
    msg=Serial.read();
    if(msg=='B') {
      leftServo.write(85);
      rightServo.write(85);
    }
    if(msg=='L') {
      leftServo.write(85);
      rightServo.write(100);
    }
    if(msg=='R') {
      leftServo.write(100);
      rightServo.write(85);
    }
    if(msg=='F'){
      leftServo.write(100);
      rightServo.write(100);
    }
  }
}
