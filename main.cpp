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
	Matrix matrix2(6, 3);
	matrix1.rand();
	matrix2.rand();
	matrix1.print();
	puts("");
	matrix2.print();
	puts("");
	MatrixMath::sub(matrix1, matrix2);
	matrix1.print();
	matrix1.del();
	matrix2.del();
	return 0;
}