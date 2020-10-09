//Operations with matrix
/*  - TO DO -
    1. Make a class which will be responsible for matrix operations;
    2. Create operations to matrixes:
    	- add;			DONE
    	- subtract;		DONE
    	- multiply;
    	- divide;
    	- transponent;
    	- inverse.
    3. Check what else can be done with matrixes;
    4. Make a way to use matrixes to calculate system of equations.
*/
#include <stdio.h>
#include <cstdlib>
#include "matrixMath/matrixMath.h"

using namespace std;

void printMatrix(int x, int y, int *matrix){
	int index = 0;
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			printf("%4d ", matrix[index++]);
		}
		puts("");
	}
}

int main(){
	MatrixMath matrix;
	// int A[5][5] = {{1, 2, 3, 4, -5},
	// 			   {5, 3, -2, 4, 5},
	// 			   {0, 15, 3, 1, 5},
	// 			   {0, -5, 3, 1, 1},
	// 			   {4, 25, 4, 1, 3}};
	// int B[2][3] = {{1, 2, 5},
	// 			   {0, -2, 10}};
	// int C[3][3] = {{1, -1, 5},
	// 			   {1, 0, 3},
	// 			   {4, 2, -2}};
	// int *D = (int*)malloc(sizeof(int)*3*3);
	int *E = matrix.create(4, 4);
	// D = matrix.mul(3, 3, (int*)C, 3, 3, (int*)C);
	// printMatrix(3, 3, D);
	printMatrix(4, 4, (int*)E);
	// delete[] D;
	delete[] E;
	return 0;
}