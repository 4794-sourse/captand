#include <iostream>
using namespace std;

int main() {
	//1.定义指针
	int a = 10;
	int *p;
	p = &a;
	cout << "a 的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;
	//2.使用指针,取值与取址
	cout << "p指向地址的值为多少：" << *p << endl;
	cout << "p的值为多少：" << &p << endl;
	system("pause");
	return 0;
}

