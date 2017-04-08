#include "main.h"
#include "holo.h"

//set holo base with vector (x pos, y pos, z rotation)
void holoSet(int x, int y, int z)
{
    motorSet(9, -x+z);  //front
    motorSet(2, x+z);   //back
    motorSet(1, y-z);   //left
    motorSet(8, y+z);   //right
}
