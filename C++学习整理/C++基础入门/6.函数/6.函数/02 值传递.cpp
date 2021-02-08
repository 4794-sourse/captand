#include <iostream>
using namespace std;

void swap(int num1, int num2) {
	cout << "交换前：" << endl;
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后：" << endl;
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
	return ;
}

int main() {
	int a, b;
	cin >> a >> b;
	swap(a, b);
	cout << "a = " << a << " ";
	cout << "b = " << b;
	system("pause");
	return 0;
}