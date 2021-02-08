#include <iostream>
using namespace std;

void bubblesort(int *arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	int arr[10] = { 3, 5, 2, 8, 9, 10, 1, 4, 7, 6 };
	int n = 10;
	bubblesort(arr, n);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}