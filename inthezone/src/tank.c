#include "main.h"
#include "tank.h"

//set tank base powers (left, right sides)
void move(int l, int r)
{
    motorSet(1, -l); // left
    motorSet(2, -l);
    motorSet(3, -r); // right
    motorSet(4, r);
}
