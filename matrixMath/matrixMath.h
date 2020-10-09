#pragma once

class MatrixMath {
	public:
		int *create(int, int);
		void add(int, int, int*, int*);
		void sub(int, int, int*, int*);
		int *mul(int, int, int*, int, int, int*);
};