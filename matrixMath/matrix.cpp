#include <stdio.h>
#include <time.h>
#include <cstdlib>

#include "matrix.h"
#include "../utils/utils.h"

Matrix::Matrix(int columnCount = 3, int rowCount = 3){
	this->colCount = columnCount;
	this->rowCount = rowCount;
	this->size = columnCount * rowCount;
	this->matrix = new int[this->size];
	for(int i = 0; i < this->size; i++){
		this->matrix[i] = 0;
	}
}
void Matrix::rand(){
	Utils utils;
	srand(time(NULL));
	for(int i = 0; i < this->size; i++){
		this->matrix[i] = utils.randomInteger(-25, 25);
	}
}
void Matrix::zero(){
	for(int i = 0; i < this->size; i++){
		this->matrix[i] = 0;
	}
}
void Matrix::print(){
	int index = 0;
	for (int i = 0; i < this->rowCount; i++){
		for (int j = 0; j < this->colCount; j++){
			printf("%4d ", this->matrix[index++]);
		}
		puts("");
	}
}
Matrix::~Matrix(){
	delete(this->matrix);
}