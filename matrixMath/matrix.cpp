#include <stdio.h>
#include <time.h>
#include <cstdlib>

#include "matrix.h"
#include "../utils/utils.h"

Matrix::Matrix(int columnCount = 3, int rowCount = 3){
	this->colCount = columnCount;
	this->rowCount = rowCount;
	this->size = columnCount * rowCount;
	srand(time(NULL));
	matrix = new int[this->size];
	for(int i = 0; i < this->size; i++){
		matrix[i] = 0;
	}
}
void Matrix::rand(){
	Utils utils;
	for(int i = 0; i < this->size; i++){
		matrix[i] = utils.randomInteger(-25, 25);
	}
}
void Matrix::zero(){
	for(int i = 0; i < this->size; i++){
		matrix[i] = 0;
	}
}
void Matrix::ones(){
	for(int i = 0; i < this->size; i++){
		matrix[i] = 1;
	}
}
void Matrix::print(){
	int index = 0;
	for (int i = 0; i < this->rowCount; i++){
		for (int j = 0; j < this->colCount; j++){
			printf("%4d ", matrix[index++]);
		}
		puts("");
	}
}
int Matrix::getColCount(){
	return this->colCount;
}
int Matrix::getRowCount(){
	return this->rowCount;
}
int Matrix::getSize(){
	return this->size;
}
void Matrix::del(){
	delete(matrix);	
}