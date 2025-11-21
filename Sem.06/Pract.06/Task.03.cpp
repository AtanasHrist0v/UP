#include <iostream>

const int MATRIX_MAX_SIZE = 100;

void printZigZag(int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE], unsigned rows, unsigned cols) {
	if (rows == 0 || cols == 0) {
        if(rows != cols){
            std::cout << "Error! Matrix has invalid size." << std::endl;
        }
        
		return;
	}

	for (int i = 0; i < rows; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < cols; j++) {
				std::cout << matrix[i][j] << ' ';
			}
		} else {
			for (int j = cols - 1; j >= 0; j--) {
				std::cout << matrix[i][j] << ' ';
			}
		}
		std::cout << std::endl;
	}
}