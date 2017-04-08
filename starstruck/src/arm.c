#include "main.h"
#include "arm.h"

//set lift power (+ up, -down)
void liftSet(int power)
{
    motorSet(4, -power);
    motorSet(5, power);
    motorSet(6, -power);
    motorSet(7, power);
}

//set arm power (+ close, -open)
void clawSet(int power)
{
    motorSet(3, power);
}
