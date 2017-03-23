#include "main.h"
#include "holo.h"

void holoSet(int x, int y, int z)
{
    motorSet(#, -x-z)); //front
    motorSet(#, x-z);   //back
    motorSet(#, -y-z)); //left
    motorSet(#, y-z);   //right
}
