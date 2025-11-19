
bool containsDigit(int number, int digit) {
	if (digit < 0 || digit > 9) {
		std::cout << "error";
		return false;
	}

	if (number == 0 && digit == 0) return true;

	while (number != 0) {
		if (digit == number % 10) {
			return true;
		}
		number /= 10;
	}

	return false;
}

void zeroNonContainingIndex(int* arr, unsigned size) {
	if (size < 1) {
		std::cout << "error";
		return;
	}

	for (int i = 0; i < size; i++) {
		if (!containsDigit(arr[i], i))
			arr[i] = 0;
	}
}