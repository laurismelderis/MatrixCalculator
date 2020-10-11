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
Matrix add(Matrix matrix1, Matrix matrix2){
	if ((matrix1.getRowCount() != matrix2.getRowCount()) && 
		(matrix1.getColCount() != matrix2.getColCount())){
		printf("Addition failed, both matrix columns and rows aren't equal\n");
		return 0;
	}
	int size = matrix1.getSize();
	Matrix newMatrix(size);
	for(int i = 0; i < size; i++){
		newMatrix.matrix[i] = matrix1.matrix[i] + matrix2.matrix[i];
	}
	return newMatrix;
}
Matrix sub(Matrix matrix1, Matrix matrix2){
	if ((matrix1.getRowCount() != matrix2.getRowCount()) && 
		(matrix1.getColCount() != matrix2.getColCount())){
		printf("Subtraction failed, both matrix columns and rows aren't equal\n");
		return 0;
	}
	int size = matrix1.getSize();
	Matrix newMatrix(size);
	for(int i = 0; i < size; i++){
		newMatrix.matrix[i] = matrix1.matrix[i] - matrix2.matrix[i];
	}
	return newMatrix;
}
Matrix mul(Matrix matrix1, Matrix matrix2){
	int rows1 = matrix1.getRowCount();
	int rows2 = matrix2.getRowCount();
	int cols1 = matrix1.getColCount();
	int cols2 = matrix2.getColCount();
	if (cols1 != rows2){
		printf("Multiplication failed, columns aren't equal to rows\n");
		return 0;
	}
	Matrix newMatrix(rows1, rows1);
	int counter = 0;
	for (int i = 0; i < rows1; i++){
		for (int j = 0; j < cols2; j++){
			int sum = 0;
			for (int z = 0; z < rows2; z++){
				sum += matrix1.matrix[z+cols1*i]*matrix2.matrix[z*cols2+j];
			}
			newMatrix.matrix[counter] = sum;
			counter++;
		}
	}
	return newMatrix;
}
}