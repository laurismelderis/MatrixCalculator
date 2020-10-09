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
	Matrix matrix1(6, 3);
	Matrix matrix2(10, 10);
	matrix1.rand();
	matrix1.print();
	matrix1.zero();
	matrix1.print();
	matrix2.print();
	return 0;
}