#include <cstdlib>

#include "utils.h" 

int Utils::randomInteger(int min, int max) {
	int randValue = min + (rand() % (max+abs(min)+1));
	return randValue;
}