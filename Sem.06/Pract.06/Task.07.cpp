#include <iostream>

const int MATRIX_MAX_SIZE = 100;

// From this task forward I'm adding const in front of matrices that I'll only read from (no modify).

// Adding into matrix1 or matrix2 (no result matrix) is also fine.
void sum(
		const int matrix1[][MATRIX_MAX_SIZE], unsigned rows1, unsigned cols1, 
		const int matrix2[][MATRIX_MAX_SIZE], unsigned rows2, unsigned cols2,
		int result[][MATRIX_MAX_SIZE], unsigned& rowsResult, unsigned& colsResult) {

	if ((rows1 == 0 || cols1 == 0) && rows1 != cols1) {
		std::cout << "Error! Matrix 1 has invalid size." << std::endl;
		return;
	}
	if ((rows2 == 0 || cols2 == 0) && rows2 != cols2) {
		std::cout << "Error! Matrix 2 has invalid size." << std::endl;
		return;
	}
	if (rows1 != rows2 || cols1 != cols2) {
		std::cout << "Error! Matrices must have the same size." << std::endl;
		return;
	}

	rowsResult = rows1;
	colsResult = cols1;

	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}

// Saving result into result matrix is also fine.
void multiply(int matrix[][MATRIX_MAX_SIZE], unsigned rows, unsigned cols, int scalar) {
	if ((rows == 0 || cols == 0) && rows != cols) {
		std::cout << "Error! Matrix has invalid size." << std::endl;
		return;
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] *= scalar;
		}
	}
}