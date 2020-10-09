#pragma once

class Matrix{
	public:
		Matrix(int, int);
		void rand();
		void zero();
		void print();
		void del();
		~Matrix();
		// int getColCount();
		// int getRowCount();
	private:
		int colCount = 0;
		int rowCount = 0;
		int size = 0;
		int *matrix;
};