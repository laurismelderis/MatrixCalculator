#include <cstdlib>

#include "utils.h" 

int Utils::randomInteger(int min, int max) {
	if (min < 0){
		return min + (rand() % (max+abs(min)+1));
	} else {
		return min + (rand() % (max));
	}
}