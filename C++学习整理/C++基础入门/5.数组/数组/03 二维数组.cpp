#include <iostream>
using namespace std;
int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	cout << "二维数组的所占空间：" << sizeof(arr) << endl;
	cout << "二维数组行的所占空间：" << sizeof(arr[0]) << endl;
	cout << "二维数组的首地址" << arr << endl;
	system("pause");
	return 0;
}