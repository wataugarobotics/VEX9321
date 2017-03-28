#include "main.h"
#include "holo.h"

void holoSet(int x, int y, int z)
{
    motorSet(1, -x-z)); //front
    motorSet(2, x-z);   //back
    motorSet(3, -y-z)); //left
    motorSet(4, y-z);   //right
}
