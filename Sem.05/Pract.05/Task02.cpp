void getMinMax(const int* arr, int size, int& min, int& max) {
	if (size < 1) {
		std::cout << "Error";
		return;
	}

	min = max = arr[0];

	for (int i = 1; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
		if (max < arr[i]) {
			max = arr[i];
		}
	}
}