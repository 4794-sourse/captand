#include <iostream>
using namespace std;

int *func() {
	//利用new关键字  可以将数据开辟到堆区
	//指针 本质上也是局部变量，放在栈区，指针保存的数据是放在堆区
	int *p = new int(10);
	cout << (int)&p << endl;
	return p;
}

int main() {
	//在堆区开辟数据
	int *p1 = func();
	cout << *p1 << endl;
	cout << *p1 << endl; 
	cout << (int)&p1 << endl;
	system("pause");
	return 0;
}