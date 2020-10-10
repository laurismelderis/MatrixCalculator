/*  - TO DO -
    1. Create operations to matrixes:
    	- add;			DONE
    	- subtract;		DONE
    	- multiply;		DONE
    	- divide;
    	- transponent;
    	- inverse.
    2. Make a way to use matrixes to calculate system of equations.
*/
#include <stdio.h>
#include <cstdlib>
#include <time.h>

#include "matrixMath.h"
#include "matrix.h"
#include "../utils/utils.h"

namespace MatrixMath {
void add(Matrix matrix1, Matrix matrix2){
	int size = matrix1.getSize();
	for(int i = 0; i < size; i++){
		matrix1.matrix[i] += matrix2.matrix[i];
	}
}
void sub(Matrix matrix1, Matrix matrix2){
	int size = matrix1.getSize();
	for(int i = 0; i < size; i++){
		matrix1.matrix[i] -= matrix2.matrix[i];
	}
}
// Matrix mul(Matrix matrix1, Matrix matrix2){
// 	Matrix newMatrix();
// 	int counter = 0;
// 	for (int i = 0; i < rowCount1; i++){
// 		for (int j = 0; j < columnCount2; j++){
// 			int sum = 0;
// 			for (int z = 0; z < rowCount2; z++){
// 				sum += matrixA[z+columnCount1*i]*matrixB[z*columnCount2+j];
// 			}
// 			c[counter] = sum;
// 			counter++;
// 		}
// 	}
// 	return c;
// }
}