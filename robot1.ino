#include <Servo.h>

Servo leftServo;
Servo rightServo;

int roll;

void setup()
{
  Serial.begin(9600);
  leftServo.attach(9);
  rightServo.attach(10);
  randomSeed(analogRead(0));
}

void loop()
{
  roll = random(10);
  if(roll < 2) {
    //leftServo.write(85);
    //rightServo.write(85);
    Serial.println('B');
    delay(1500);
  } else if(roll < 6) {
    roll = random(2);
    if(roll) {
      //leftServo.write(85);
      //rightServo.write(100);
      Serial.println('L');
    } else {
      //leftServo.write(100);
      //rightServo.write(85);
      Serial.println('R');
    }
    delay(1500);
  } else {
    //leftServo.write(100);
    //leftServo.write(100);
    Serial.println('F');
    delay(1500);
  }
}
