#include <iostream>
using namespace std;
int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	//1.通过sizeof查看数组
	cout << "sizeof(arr[0]) = " << sizeof(arr[0]) << endl;
	cout << "sizeof(arr) = " << sizeof(arr) << endl;
	cout << "数组元素大小 =" << sizeof(arr) / sizeof(arr[0])<< endl;
	//2.通过数组名查看数组首地址，数组名是常量不可以赋值
	cout << "数组首地址为：" << (int)arr << "、" << arr << endl;
	cout << "数组第一个元素的地址为：" << (int)&arr[0] << "、" << &arr[0] << endl;
	cout << "数组第二个元素的地址为：" << (int)&arr[1] << "、" << &arr[1] << endl;
	system("pause");
	return 0;
}