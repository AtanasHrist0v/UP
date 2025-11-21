#include <iostream>

const int MATRIX_MAX_SIZE = 100;

void multiply(
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
	if (cols1 != rows2) {
		std::cout << "Error! Matrices can't multiply." << std::endl;
		return;
	}

	rowsResult = rows1;
	colsResult = cols2;

	for (int row = 0; row < rows1; row++) {
		for (int col = 0; col < cols2; col++) {
			result[row][col] = 0;

			for (int k = 0; k < rows2 /*can also be cols1*/; k++) {
				result[row][col] += matrix1[row][k] * matrix2[k][col];
			}
		}
	}
}