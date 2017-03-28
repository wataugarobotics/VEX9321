#include "main.h"

void operatorControl() {
	while (1)
	{
		holoSet(
			joystickGetAnalog(1,4),	//Left Joy X => Holo X
			joystickGetAnalog(1,3),	//Left Joy Y => Holo Y
			joystickGetAnalog(1,1)	//Right Joy X => Holo Z
		);
		delay(20);
	}
}
