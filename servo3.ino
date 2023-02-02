#include <Servo.h>
Servo servo;
int angle = 0;
void setup() {
  servo.attach(9);
  servo.write(angle);
}
void loop() 
{ 
 // scan from 0 to 180 degrees
  for(angle = 0; angle < 360; angle++)  
  {                                  
    servo.write(angle);               
    delay(20);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 360; angle > 0; angle--)    
  {                                
    servo.write(angle);           
    delay(20);       
  } 
}
