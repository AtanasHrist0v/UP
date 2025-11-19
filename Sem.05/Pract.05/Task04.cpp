void allFromInterval(const int* arr, unsigned arrSize, int* result, unsigned& resultSize, int a, int b) {
	if (arrSize < 1) {
		std::cout << "arr doesn't exist";
		return;
	}
	if (resultSize != 0) {
		std::cout << "result array is not empty";
		return;
	}
	if (a > b) {
		std::cout << "interval is invalid";
		return;
	}

	for (int i = 0; i < arrSize; i++) {
		if (arr[i] >= a && arr[i] <= b) {
			result[resultSize++] = arr[i];
		}
	}
}