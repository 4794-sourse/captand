#include <iostream>
using namespace std;
int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	cout << "��ά�������ռ�ռ䣺" << sizeof(arr) << endl;
	cout << "��ά�����е���ռ�ռ䣺" << sizeof(arr[0]) << endl;
	cout << "��ά������׵�ַ" << arr << endl;
	system("pause");
	return 0;
}