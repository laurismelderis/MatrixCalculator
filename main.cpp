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
	Matrix x(4, 4);
	Matrix y(4, 4);
	x.rand();
	y.rand();
	Matrix z = MatrixMath::mul(x, y);
	x.print();
	puts("");
	y.print();
	puts("");
	z.print();
	puts("");
	x.del();
	y.del();
	z.del();
	return 0;
}