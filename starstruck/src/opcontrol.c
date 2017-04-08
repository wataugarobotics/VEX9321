#include "main.h"

void operatorControl() {
	while (1)
	{
		holoSet(
			joystickGetAnalog(1,4),	//Left Joy X => Holo X
			joystickGetAnalog(1,3),	//Left Joy Y => Holo Y
			joystickGetAnalog(1,1)	//Right Joy X => Holo Z
		);

		//Left Triggers (up => open, down => close)
		if(joystickGetDigital(1,5, JOY_UP)) {
			liftSet(127);
		} else if(joystickGetDigital(1,5, JOY_DOWN)) {
			liftSet(-127);
		} else {
			liftSet(0);
		}

		//Right Triggers (up => up, down => down)
		if(joystickGetDigital(1,6, JOY_UP)) {
			clawSet(-100);
		} else if(joystickGetDigital(1,6, JOY_DOWN)) {
			clawSet(100);
		} else {
			clawSet(0);
		}

		//Delay for stability & background tasks
		delay(20);
	}
}
