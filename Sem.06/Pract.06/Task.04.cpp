const int MATRIX_MAX_SIZE = 100;

bool isTriangular(int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE], unsigned n) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (matrix[i][j] != 0) {
				return false;
			}
		}
	}

	return true;
}