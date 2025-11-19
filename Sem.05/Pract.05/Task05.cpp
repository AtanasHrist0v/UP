bool isSymetrical(const int* arr, unsigned size) {
	if (size < 1) {
		std::cout << "error";
		return false;
	}

	int halfSize = size / 2;
	for (int i = 0; i < halfSize; i++) {
		if (arr[i] != arr[size - 1 - i]) {
			return false;
		}
	}

	return true;
}