#include "main.h"
#include "arm.h"

//set lift power (+ up, -down)
void liftSet(int power)
{
    motorSet(5, -power);
    motorSet(6, power);
}

//set arm power (+ close, -open)
void clawSet(int power)
{
    motorSet(7, power);
    motorSet(8, -power);
}
