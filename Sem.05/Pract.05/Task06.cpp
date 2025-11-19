// MDS = Monotonically Decreasing Sequence

int lengthOfLongestMDS(const int* arr, unsigned size) {
	if (size < 1) {
		std::cout << "error";
		return -1;
	}

	int maxLength = 1;
	int curLength = 1;

	for (int i = 1; i < size; i++) {
		if (arr[i - 1] < arr[i]) {
			if (curLength > maxLength) {
				maxLength = curLength;
			}
			curLength = 1;
		} else {
			curLength++;
		}
	}

	return maxLength;
}