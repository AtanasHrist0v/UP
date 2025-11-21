#include <iostream>

const int MATRIX_MAX_SIZE = 100;

bool isMagicSquare(const int matrix[][MATRIX_MAX_SIZE], unsigned matrixSize) {
	int firstRowSum = 0;

	for (int i = 0; i < matrixSize; i++) {
		firstRowSum += matrix[0][i];
	}

	for (int i = 1; i < matrixSize; i++) {
		int rowSum = 0;

		for (int j = 0; j < matrixSize; j++) {
			rowSum += matrix[i][j];
		}

		if (rowSum != firstRowSum) return false;
	}

	for (int i = 0; i < matrixSize; i++) {
		int colSum = 0;

		for (int j = 0; j < matrixSize; j++) {
			colSum += matrix[j][i];
		}

		if (colSum != firstRowSum) return false;
	}

	int diagonalSum = 0;
	for (int i = 0; i < matrixSize; i++) {
		diagonalSum += matrix[i][i];
	}
	if (diagonalSum != firstRowSum) return false;

	diagonalSum = 0;
	for (int i = 0; i < matrixSize; i++) {
		diagonalSum += matrix[i][matrixSize - 1 - i];
	}
	if (diagonalSum != firstRowSum) return false;

	return true;
}

void readMatrix(int matrix[][MATRIX_MAX_SIZE], int& matrixSize) {
	std::cout << "Enter square matrix dimention: ";
	std::cin >> matrixSize;

	std::cout << "Enter matrix:" << std::endl;
	for (int i = 0; i < matrixSize; i++) {
		for (int j = 0; j < matrixSize; j++) {
			std::cin >> matrix[i][j];
		}
	}
}

int main() {
	int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE];
	int matrixSize;

	readMatrix(matrix, matrixSize);
	std::cout << "The matrix is ";
	if (!isMagicSquare(matrix, matrixSize)) {
		std::cout << "NOT ";
	}
	std::cout << "a magical square!";

	return 0;
}