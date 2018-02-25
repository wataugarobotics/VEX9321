#include "main.h"

void operatorControl() {
	while (1)
	{
		move(
			joystickGetAnalog(1,3),	//Left Joy Y => Tank L
			joystickGetAnalog(1,2)	//Right Joy Y => Tank R
		);

		//Left Triggers (up => open, down => close)
		if(joystickGetDigital(1,5, JOY_UP)) {
			liftSet(80);
		} else if(joystickGetDigital(1,5, JOY_DOWN)) {
			liftSet(-30);
		} else {
			liftSet(20);
		}

		//Right Triggers (up => up, down => down)
		if(joystickGetDigital(1,6, JOY_DOWN)) {
			clawSet(-100);
		} else if(joystickGetDigital(1,6, JOY_UP)) {
			clawSet(100);
		} else {
			clawSet(0);
		}

		//Delay for stability & background tasks
		delay(20);
	}
}
