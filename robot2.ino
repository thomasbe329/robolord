#include <Servo.h> // Include a library for the motors

Servo leftServo;
Servo rightServo;

char msg = ' ';

/* Notes:
 *  This robot will follow the commands of another robot
 *  and move forwards, backwards, left or right
 *  depending on the orders.
 */

void setup()
{
  // Open serial port 9600
  Serial.begin(9600);
  // Set right and left Servo to their digital pins 
  rightServo.attach(9);
  leftServo.attach(10);
}

void loop()
{
  while(Serial.available()) {
    // Get message from robot 1
    msg=Serial.read();
    // Drive backwards if message is B
    if(msg=='B') {
      leftServo.write(75);
      rightServo.write(75);
    }
    // Turn left if message is L
    if(msg=='L') {
      leftServo.write(75);
      rightServo.write(110);
    }
    // Turn right if message is R
    if(msg=='R') {
      leftServo.write(110);
      rightServo.write(75);
    }
    // Drive forwards if message is F
    if(msg=='F') {
      leftServo.write(110);
      rightServo.write(110);
    }
    // Stop moving if message is S
    if(msg=='S') {
      leftServo.write(91);
      rightServo.write(91);
    }
  }
}
