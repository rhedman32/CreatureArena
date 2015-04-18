#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Creature.h"

using namespace std;

//FUNCITON ATTACK DETERMINES THE POWER OF THE ATTACK//
int Creature::Attack()
{	
	srand(time(NULL));
	power = rand() % 25 + 1;
	return power;
}
