const int MATRIX_MAX_SIZE = 100;

bool isMagicSquare(int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE], unsigned n) {
	int firstRowSum = 0;

	for (int i = 0; i < n; i++) {
		firstRowSum += matrix[0][i];
	}

	for (int i = 1; i < n; i++) {
		int rowSum = 0;

		for (int j = 0; j < n; j++) {
			rowSum += matrix[i][j];
		}

		if (rowSum != firstRowSum) return false;
	}

	for (int i = 0; i < n; i++) {
		int colSum = 0;

		for (int j = 0; j < n; j++) {
			colSum += matrix[j][i];
		}

		if (colSum != firstRowSum) return false;
	}

	int diagonalSum = 0;
	for (int i = 0; i < n; i++) {
		diagonalSum += matrix[i][i];
	}
	if (diagonalSum != firstRowSum) return false;

	diagonalSum = 0;
	for (int i = 0; i < n; i++) {
		diagonalSum += matrix[i][n - 1 - i];
	}
	if (diagonalSum != firstRowSum) return false;

	return true;
}