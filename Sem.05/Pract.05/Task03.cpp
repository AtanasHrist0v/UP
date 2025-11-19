void remove(int index, int* arr, int& size) {
	if (index < 0 || index >= size) {
		std::cout << "index is invalid";
		return;
	}
	if (size < 1) {
		std::cout << "size is invalid";
		return;
	}

	for (int i = index + 1; i < size; i++) {
		arr[i - 1] = arr[i];
	}
	size--;
}

// or
//	void remove(unsigned index, int* arr, int& size) {
//		if (size < 1) {
//			std::cout << "size is invalid";
//			return;
//		}
//
//		for (int i = index + 1; i < size; i++) {
//			arr[i - 1] = arr[i];
//		}
//		size--;
//	}