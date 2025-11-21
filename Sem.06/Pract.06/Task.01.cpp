#include <iostream>

const int MATRIX_MAX_SIZE = 100;

int min(int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE], unsigned rows, unsigned cols) {
    if (rows == 0 || cols == 0) {
        if(rows != cols){
            std::cout << "Error! Matrix has invalid size." << std::endl;
        } else {
            std::cout << "Error! Matrix empty." << std::endl;
        }
        
		return -1;
	}

	int minElement = matrix[0][0];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (minElement > matrix[i][j]) {
				minElement = matrix[i][j];
			}
		}
	}

	return minElement;
}