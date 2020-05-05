
#include <iostream>
#include < cstdlib >
#include <vector>

using namespace std;

int min(int* arr, int s) {
	int min = *arr;
	for (int i = 0; i != s; i++) {
		if (min > * (arr + i)) {
			min = *(arr + i);
		}
	}
	return min;
}

int max(int* arr, int s) {
	int max = *arr;
	for (int i = 0; i != s; i++) {
		if (max < *(arr + i)) {
			max = *(arr + i);
		}
	}
	return max;
}



int sizee(char* pointer) {
	int i = 0;
	while (true) {
		if (*(pointer + i) == '\0') {
			cout << "size=" << i << endl;
			return i;
		}
		i++;
	}
}

void coutt(char* pointer) {
	int i = 0;
	while (true) {
		if (*(pointer + i) == '\0') {
			break;
		}
		cout << *(pointer + i) << " ";
		i++;
	}
}

void change(char* pointer, int size) {
	for (int j = size - 1; j >= 0; j--)
	{
		cout << *(pointer + j)<<" ";
	} 
}

void second(char* pointer) {
	const int s = sizee(pointer);
	cout << endl;
	coutt(pointer);
	cout << endl;
	change(pointer, s);
	cout << endl;
	coutt(pointer);
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 25;
	int arr[size];
	int* pointer_arr = arr;
	for (int i = 0; i != size; i++) {
		*(pointer_arr + i) = rand() % 100;
		cout << *(pointer_arr + i) << " " << endl;
	}
	cout << "Минимальное значение массива " << min(pointer_arr, size) << endl;
	cout << "Максиальное значение массива " << max(pointer_arr, size) << endl;

	char unnamed[] = { 'v', 'a', 's', 'y', 'p', 'l', '\0' };
	char* name = unnamed;
	second(name);
}
