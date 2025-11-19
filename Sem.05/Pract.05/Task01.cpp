double average(const int* arr, int size) {
	if (size < 1) {
		std::cout << "Error";
		return -1;
	}

	double avg = 0;

	for (int i = 0; i < size; i++) {
		avg += arr[i];
	}

	return avg / size;
}

double doubleAbs(double number) {
	const int EPSILON = 1e-10;

	if (number < EPSILON && -number < EPSILON) {
		return 0;
	}

	return number < 0 ? -number : number;
}

int closestToAverage(const int* arr, int size, double average) {
	int closest = arr[0];

	for (int i = 1; i < size; i++) {
		if (doubleAbs(arr[i] - average) < doubleAbs(closest - average)) {
			closest = arr[i];
		}
	}

	return closest;
}

double getAverageAndClosest(const int* arr, int size, int& closest) {
	double avg = average(arr, size);

	closest = closestToAverage(arr, size, avg);
	
	return avg;
}