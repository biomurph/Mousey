/*


*/
#include "Mousey.h"

Mousey mouse;

void setup(){
  mouse.start();
  attachInterrupt(digitalPinToInterrupt(WHEEL_A), wheel_ISR, CHANGE);
}

void loop(){
	mouse.update();
}

void wheel_ISR(){
  mouse.encode();
}
