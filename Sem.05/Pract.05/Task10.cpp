void fillWithUnion(const int* arr1, unsigned size1, const int* arr2, unsigned size2, int* result, int& resultSize) {
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
	
	for (int i = 0; i < size1; i++) {
		result[resultSize++] = arr1[i];
	}
	for (int i = 0; i < size2; i++) {
		bool alreadyContained = false;

		for (int j = 0; j < resultSize; j++) {
			if (arr2[i] == result[j]) {
				alreadyContained = true;
				break;
			}
		}

		if (!alreadyContained) {
			result[resultSize++] = arr2[i];
		}
	}
}

void fillWithIntersect(const int* arr1, unsigned size1, const int* arr2, unsigned size2, int* result, int& resultSize) {
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

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr1[i] == arr2[j]) {
				result[resultSize++] = arr1[i];
			}
		}
	}
}