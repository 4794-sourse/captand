#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 20;
	const int *p = &a; //常量指针
	*p = b;//错误
	p = &b;//正确
	int * const p1 = &a; //指针常量
	*p1 = b; //正确
	p1 = &b; //错误
	const int * const p3 = &a;
	*p3 = b; //错误
	p3 = &b; //错误
	system("pause");
	return 0;
}