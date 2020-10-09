#include <cstdlib>
#include <time.h>

#include "matrixMath.h"
#include "../utils/utils.h"

int *MatrixMath::create(int columnCount = 3, int rowCount = 3){
	Utils utils;
	srand(time(0));
	int size = columnCount*rowCount;
	int *newMatrix = new int (size);
	for(int i = 0; i < size; i++){
		newMatrix[i] = utils.randomInteger(-25, 25);
	}
	return newMatrix;
}
void MatrixMath::add(int columCount, int rowCount, int *matrixA, int *matrixB){
	int index = 0;
	for (int i = 0; i < columCount; i++){
		for (int j = 0; j < rowCount; j++){
			matrixA[index] += matrixB[index];
			index++;
		}
	}
}
void MatrixMath::sub(int columCount, int rowCount, int *matrixA, int *matrixB){
	int index = 0;
	for (int i = 0; i < columCount; i++){
		for (int j = 0; j < rowCount; j++){
			matrixA[index] -= matrixB[index];
			index++;
		}
	}
}
int *MatrixMath::mul(int columnCount1, int rowCount1, int *matrixA, int columnCount2, int rowCount2, int *matrixB){
	int newMatrixSize = rowCount1*columnCount2;
	int *c = new int(newMatrixSize);
	int counter = 0;
	for (int i = 0; i < rowCount1; i++){
		for (int j = 0; j < columnCount2; j++){
			int sum = 0;
			for (int z = 0; z < rowCount2; z++){
				sum += matrixA[z+columnCount1*i]*matrixB[z*columnCount2+j];
			}
			c[counter] = sum;
			counter++;
		}
	}
	return c;
}
