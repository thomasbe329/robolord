#include <Servo.h>

Servo leftServo;
Servo rightServo;

int roll;
int timedelay;

void setup()
{
  Serial.begin(9600);
  rightServo.attach(9);
  leftServo.attach(10);
  randomSeed(analogRead(0));
  delay(5000);
}

void loop()
{
  roll = random(10);
  timedelay = random(250, 1000);
  if(roll < 2) {
    Serial.println('B');
    leftServo.write(75);
    rightServo.write(75);
    delay(timedelay);
  } else if(roll < 6) {
    roll = random(2);
    if(roll) {
      Serial.println('L');
      leftServo.write(75);
      rightServo.write(110);
      delay(465);
    } else {
      Serial.println('R');
      leftServo.write(110);
      rightServo.write(75);
      delay(465);
    }
  } else {
    Serial.println('F');
    leftServo.write(110);
    rightServo.write(110);
    delay(timedelay);
  }
  Serial.println('S');
  leftServo.write(91);
  rightServo.write(91);
  delay(250);
}
