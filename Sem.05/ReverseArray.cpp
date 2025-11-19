void Swap(int &f, int &s)
{
	int temp = f;
	f = s;
	s = temp;
}

void ReverseArray(int* arr, int size)
{
	int halfSize = size / 2;

	for (int i = 0; i < halfSize; i++) {
		Swap(arr[i], arr[size - 1 - i]);
    }
}