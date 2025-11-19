void join(const int* arr1, unsigned size1, const int* arr2, unsigned size2, int* result, int& resultSize) {
	if (size1 < 1) {
		std::cout << "size1 is invalid";
		return;
	}
	if (size1 < 1) {
		std::cout << "size2 is invalid";
		return;
	}
	if (resultSize != 0) {
		std::cout << "result array is invalid";
		return;
	}

	int totalSize = size1 + size2;

	for (int i = 0, j = 0; i + j < totalSize;) {
		if (arr1[i] <= arr2[j] && i < size1) {
			result[resultSize++] = arr1[i++];
		} else {
			result[resultSize++] = arr2[j++];
		}
	}
}