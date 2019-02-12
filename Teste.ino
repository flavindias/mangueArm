#include <Servo.h>
#include <meArm.h>

meArm arm;
//Joystick


void setup() {
  //Laranja
  arm.begin(11, 10, 9, 6);
  arm.openGripper();

  


}
void loop() {
  
  arm.gotoPoint(0,0,0); 
  arm.closeGripper();
  //Go down, forward and right to drop it
//  arm.gotoPoint(50,200,10);
  arm.openGripper();
  //Back to start position
//  arm.gotoPoint(50,100,50);
  arm.closeGripper();
  arm.openGripper();
  
  arm.gotoPoint(0,-80,0);
arm.closeGripper();
  arm.openGripper();
  Serial.begin(9600);
  
  
}
