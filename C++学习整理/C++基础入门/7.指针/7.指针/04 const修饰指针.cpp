#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 20;
	const int *p = &a; //����ָ��
	*p = b;//����
	p = &b;//��ȷ
	int * const p1 = &a; //ָ�볣��
	*p1 = b; //��ȷ
	p1 = &b; //����
	const int * const p3 = &a;
	*p3 = b; //����
	p3 = &b; //����
	system("pause");
	return 0;
}