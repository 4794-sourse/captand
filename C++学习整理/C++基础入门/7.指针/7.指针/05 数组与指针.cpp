#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = arr; //arr就是数组的首地址
	cout << "利用指针访问第一个元素" << *p << endl;
	p++; //让指针向后偏移四个字节
	cout << "利用指针访问第一个元素" << *p << endl;
	system("pause");
	return 0;
}