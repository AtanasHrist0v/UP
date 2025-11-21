#include <iostream>

const int MATRIX_MAX_SIZE = 100;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void transpose(int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE], unsigned N, unsigned M) {
	if ((N == 0 || M == 0) && N != M) {
		std::cout << "matrix has invalid size";
		return;
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < M; j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}

void reverseArray(int arr[], int size) {
	int middle = size / 2;

	for (int i = 0; i < middle; i++) {
		swap(arr[i], arr[size - 1 - i]);
	}
}

void rotateRight(int matrix[][MATRIX_MAX_SIZE], unsigned rows, unsigned cols) {
	if ((rows == 0 || cols == 0) && rows != cols) {
		std::cout << "Error! Matrix has invalid size." << std::endl;
		return;
	}

	transpose(matrix, rows, cols);

	for (int i = 0; i < rows; i++) {
		reverseArray(matrix[i], cols);
	}
}