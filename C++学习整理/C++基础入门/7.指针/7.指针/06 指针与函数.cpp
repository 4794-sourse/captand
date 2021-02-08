#include <iostream>
using namespace std;

void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	//指针和函数
	//1.值传递
	int a = 10, b = 20;
	swap01(a, b);
	cout << "a = " << a << " , " << "a =  " << b << endl;
	//2.地址传递
	system("pause");
	return 0;
}