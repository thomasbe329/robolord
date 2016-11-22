/*
Þetta forrit keyrir vex 269 motor með esc 29 motorcontroler
spenna í motor er 7,2 v, arduino er á 5V
tengið digital 9 í signal (hvítur) í esc, ground í svartan og
rauðan í + sjá mynd.
Gildi fyrir motor eru áfram (100 - 160)100 er lítill hraði
Gildi fyrir motor eru afturábak (20 - 85)85 er lítill hraði
Gildi fyrir motor eru stop 91 er engin hraði
*/
#include <Servo.h>

Servo myServo;

void setup()
{
  myServo.attach (9);
}

void loop()
{
  myServo.write(160);
  delay(3000);
  
  myServo.write(91);
  delay(3000);
  
  myServo.write(20);
  delay(3000);
  
   myServo.write(91);
  delay(3000);
}
