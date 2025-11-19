int numWithMostOccurrences(const int* arr, unsigned size) {
	if (size < 1) {
		std::cout << "error";
		return -1;
	}

	int num = arr[0];
	int occurrences = 1;

	for (int i = 0; i < size; i++) {
		int curNum = arr[i];
		int curOccurrences = 0;

		for (int j = 0; j < size; j++) {
			if (arr[j] == curNum) {
				curOccurrences++;
			}
		}

		if (curOccurrences > occurrences) {
			num = curNum;
			occurrences = curOccurrences;
		}
	}

	return num;
}