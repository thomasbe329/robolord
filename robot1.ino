#include <Servo.h> // Include a library for the motors

Servo leftServo;
Servo rightServo;

int roll;
int timedelay;

/* Notes:
 *  This robot will randomly move forwards, backwards, left or right
 *  and tell another robot to do the same.
 */

void setup()
{
  // Open serial port 9600
  Serial.begin(9600);
  // Set right and left Servo to their digital pins 
  rightServo.attach(9);
  leftServo.attach(10);
  // Make random random
  randomSeed(analogRead(0));
  delay(5000);
}

void loop()
{
  roll = random(10);
  timedelay = random(250, 1000);
  // If roll is between 0-1 then drive backwards and 
  // tell robot 2 to drive backwards
  if(roll < 2) {
    Serial.println('B');
    leftServo.write(75);
    rightServo.write(75);
    delay(timedelay);
  } 
  // If roll is between 2-5 then turn
  else if(roll < 6) {
    roll = random(2);
    // If roll is 1 then turn left and 
    // tell robot 2 to turn left
    if(roll) {
      Serial.println('L');
      leftServo.write(75);
      rightServo.write(110);
      delay(465);
    } 
    // If roll is 0 then turn right and 
    // tell robot 2 to turn right
    else {
      Serial.println('R');
      leftServo.write(110);
      rightServo.write(75);
      delay(465);
    }
  }
  // If roll is between 6-9 then drive forwards and 
  // tell robot 2 to drive forwards
  else {
    Serial.println('F');
    leftServo.write(110);
    rightServo.write(110);
    delay(timedelay);
  }
  // Stop for 0,25 secs and 
  // tell robot 2 to stop
  Serial.println('S');
  leftServo.write(91);
  rightServo.write(91);
  delay(250);
}
