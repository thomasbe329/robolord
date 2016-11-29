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
      leftServo.write(75);
      rightServo.write(75);
    }
    if(msg=='L') {
      leftServo.write(75);
      rightServo.write(110);
    }
    if(msg=='R') {
      leftServo.write(110);
      rightServo.write(75);
    }
    if(msg=='F') {
      leftServo.write(110);
      rightServo.write(110);
    }
    if(msg=='S') {
      leftServo.write(91);
      rightServo.write(91);
    }
  }
}
