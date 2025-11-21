#include <iostream>

const int MATRIX_MAX_SIZE = 100;

void printPrimaryAndSecondaryDiagonals(int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE], unsigned n) {
	if (n == 0) {
        return;
    }

	for (int i = 0; i < n; i++) {
		std::cout << matrix[i][i] << ' ';
	}
	std::cout << std::endl;

	for (int i = 0; i < n; i++) {
		std::cout << matrix[i][n - 1 - i] << ' ';
	}
	std::cout << std::endl;
}