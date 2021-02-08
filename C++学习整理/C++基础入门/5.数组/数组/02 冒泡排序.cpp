#include <iostream>
using namespace std;
int main() {
	int arr[10] = { 1, 4, 3, 5, 7, 2, 6, 8, 9, 10 };
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
 }