#include "main.h"

/*
 * Code running in the autonomous task cannot access information from the VEX Joystick. However,
 * the autonomous function can be invoked from another task if a VEX Competition Switch is not
 * available, and it can access joystick information if called in this way.
 *
 * The autonomous task may exit, unlike operatorControl() which should never exit. If it does
 * so, the robot will await a switch to another mode or disable/enable cycle.
 */

void autonomous() {
    //forward & claw out (2500), lift (1000)
/*    holoSet(0, 127, 0);
    clawSet(-50);
    liftSet(127);
    delay(1000);
    liftSet(0);
    delay(1500);

    //right & lift oscillation
    holoSet(127, 0, 0);
    for(int i = 0; i < 10; ++i)
    {
        liftSet(-50);
        delay(250);
        liftSet(127);
        delay(250);
    }
*/
}
