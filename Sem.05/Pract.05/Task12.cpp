double doubleAbs(double number) {
	const int EPSILON = 1e-10;

	if (number < EPSILON && -number < EPSILON) {
		return 0;
	}

	return number < 0 ? -number : number;
}

bool equal(double d1, double d2) {
	return doubleAbs(d1 - d2) == 0;
}

bool areLinearlyIndependent(const int* vector1, unsigned v1size, const int* vector2, unsigned v2size) {
	if (v1size < 1) {
		std::cout << "size1 is invalid";
		return false;
	}
	if (v2size < 1) {
		std::cout << "size2 is invalid";
		return false;
	}

	if (v1size != v2size) {
		std::cout << "vercors aren't the same size";
		return false;
	}

	double quotient = (vector1[0] * 1.0) / vector2[0];

	for (int i = 1; i < v1size; i++) {
		if (!equal((vector1[i] * 1.0) / vector2[i], quotient)) {
			return false;
		}
	}

	return true;
}