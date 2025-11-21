#include <iostream>

const int ARR_MAX_SIZE = 30;

void readArr(int arr[], int& arrSize) {
	std::cout << "Enter the number of elements for the array: ";
	std::cin >> arrSize;
	std::cout << "Enter the elements: ";

	for (int i = 0; i < arrSize; i++) {
		std::cin >> arr[i];
	}
}

void removeNumberAt(unsigned index, int numbers[], int& numbersSize) {
	if (numbersSize < 0) {
		std::cout << "Error! numbersSize is invalid.";
		return;
	}
	if (index >= numbersSize) {
		std::cout << "Error! index is outside the bounds of the array.";
		return;
	}

	for (int i = index + 1; i < numbersSize; i++) {
		numbers[i - 1] = numbers[i];
	}
	numbersSize--;
}

void removeNumberAt(unsigned index, bool numbers[], int& numbersSize) {
	if (numbersSize < 0) {
		std::cout << "Error! numbersSize is invalid.";
		return;
	}
	if (index >= numbersSize) {
		std::cout << "Error! index is outside the bounds of the array.";
		return;
	}

	for (int i = index + 1; i < numbersSize; i++) {
		numbers[i - 1] = numbers[i];
	}
	numbersSize--;
}

void removeNumbers(int numbers[], int& numbersSize, int indexes[], int indexesSize) {
	if (numbersSize < 0) {
		std::cout << "Error! numbersSize cannot be less than 0.";
		return;
	}
	if (indexesSize < 0) {
		std::cout << "Error! indexesSize cannot be less than 0.";
		return;
	}

	bool indexesToBeRemoved[ARR_MAX_SIZE]{ 0 };

	for (int i = 0; i < numbersSize; i++) {
		int iIndexOccurrences = 0;

		for (int j = 0; j < indexesSize; j++) {
			if (indexes[j] == i)
				iIndexOccurrences++;
		}

		if (iIndexOccurrences % 2 != 0) {
			indexesToBeRemoved[i] = true;
		}
	}

	for (int i = 0; i < numbersSize; i++) {
		if (indexesToBeRemoved[i]) {
			removeNumberAt(i, numbers, numbersSize);
			numbersSize++; // correction for calling removeNumberAt() with numbersSize again
			removeNumberAt(i, indexesToBeRemoved, numbersSize);
			i--; // we need to recheck the same index after removal
		}
	}
}
