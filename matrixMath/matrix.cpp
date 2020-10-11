#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <math.h>

#include "matrix.h"
#include "../utils/utils.h"

Matrix::Matrix(){

}

Matrix::Matrix(int size = 9){
	if (size <= 0){
		printf("Creating matrix failed, matrix can't have negative or NULL column or row count");
		return;
	}
	int sqrSize = (int)sqrt(size);
	if ((size % sqrSize) != 0){
		printf("Creating matrix failed, the size should be defined for square matrix");
		return;
	}
	this->colCount = sqrSize;
	this->rowCount = sqrSize;
	this->size = size;
	srand(time(NULL));
	matrix = new int[this->size];
	for(int i = 0; i < this->size; i++){
		matrix[i] = 0;
	}
}
Matrix::Matrix(int columnCount = 3, int rowCount = 3){
	if (columnCount <= 0 || rowCount <= 0){
		printf("Creating matrix failed, matrix can't have negative or NULL column or row count");
		return;
	}
	this->colCount = columnCount;
	this->rowCount = rowCount;
	this->size = columnCount * rowCount;
	srand(time(NULL));
	matrix = new int[this->size];
	for(int i = 0; i < this->size; i++){
		matrix[i] = 0;
	}
}
void Matrix::create(int size = 9){
	if (size <= 0){
		printf("Creating matrix failed, matrix can't have negative or NULL column or row count");
		return;
	}
	int sqrSize = (int)sqrt(size);
	if ((size % sqrSize) != 0){
		printf("Creating matrix failed, the size should be defined for square matrix");
		return;
	}
	this->colCount = sqrSize;
	this->rowCount = sqrSize;
	this->size = size;
	srand(time(NULL));
	matrix = new int[this->size];
	for(int i = 0; i < this->size; i++){
		matrix[i] = 0;
	}
}
void Matrix::create(int columnCount = 3, int rowCount = 3){
	if (columnCount <= 0 || rowCount <= 0){
		printf("Creating matrix failed, matrix can't have negative or NULL column or row count");
		return;
	}
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
		matrix[i] = utils.randomInteger(-10, 10);
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