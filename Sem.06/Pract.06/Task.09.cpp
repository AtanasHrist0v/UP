#include <iostream>

const int MATRIX_MAX_SIZE = 100;

void printSpiral(const int matrix[][MATRIX_MAX_SIZE], unsigned rows, unsigned cols) {
	if ((rows == 0 || cols == 0) && rows != cols) {
		std::cout << "Error! Matrix has invalid size." << std::endl;
		return;
	}

	int top = 0,
		bottom = rows,
		left = 0,
		right = cols;

	while (top < bottom && left < right) {
		for (int i = left; i < right; i++) {
			std::cout << matrix[top][i] << ' ';
		}
		top++;
		for (int i = top; i < bottom; i++) {
			std::cout << matrix[i][right - 1] << ' ';
		}
		right--;
		for (int i = right - 1; i >= left; i--) {
			std::cout << matrix[bottom - 1][i] << ' ';
		}
		bottom--;
		for (int i = bottom - 1; i >= top; i--) {
			std::cout << matrix[i][left] << ' ';
		}
		left++;
	}
}