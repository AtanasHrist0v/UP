#include <iostream>

const int ARR_MAX_SIZE = 100;

void readArr(int arr[], int& arrSize) {
	std::cout << "Enter the number of elements for the array: ";
	std::cin >> arrSize;
	std::cout << "Enter the elements: ";

	for (int i = 0; i < arrSize; i++) {
		std::cin >> arr[i];
	}
}

bool isSorted(const int arr[], int arrSize) {
	for (int i = 1; i < arrSize; i++) {
		if (arr[i - 1] > arr[i])
			return false;
	}

	return true;
}

bool isPerfect(int number) {
	const int FIRST_PERFECT_NUMBER = 6;

	if (number < FIRST_PERFECT_NUMBER) return false;

	int halfNumber = number / 2;
	int sum = 1;

	for (int i = 2; i <= halfNumber; i++) {
		if (number % i == 0) {
			sum += i;
		}
	}

	return sum == number;
}

void printPerfectNumbers(const int arr[], int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		if (isPerfect(arr[i])) {
			std::cout << arr[i] << ' ';
		}
	}
}

int main() {
	int arr[ARR_MAX_SIZE];
	int arrSize = 0;

	readArr(arr, arrSize);

	if (!isSorted(arr, arrSize)) {
		std::cout << "Error! Array must be sorted." << std::endl;
		return -1;
	}

	printPerfectNumbers(arr, arrSize);
	
	return 0;
}
