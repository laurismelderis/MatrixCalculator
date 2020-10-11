//Operations with matrix
/*  - TO DO -
    1. Make a class which will be responsible for matrix operations; DONE
    2. Improve matrixMath/matrixMath.h;
*/
#include <stdio.h>
#include <cstdlib>
#include "matrixMath/matrix.h"
#include "matrixMath/matrixMath.h"

int main(){
	Matrix x(4, 3);
	x.ones();
	x.print();
	x.del();
	return 0;
}