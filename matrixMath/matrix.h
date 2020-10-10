#pragma once

class Matrix{
	public:
		int *matrix;
		Matrix(int, int);
		void rand();
		void zero();
		void ones();
		void print();
		int getColCount();
		int getRowCount();
		int getSize();
		void del();
	private:
		int colCount = 0;
		int rowCount = 0;
		int size = 0;
};