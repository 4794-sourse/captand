#include <iostream>
using namespace std;

int main() {
	//1.����ָ��
	int a = 10;
	int *p;
	p = &a;
	cout << "a �ĵ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;
	//2.ʹ��ָ��,ȡֵ��ȡַ
	cout << "pָ���ַ��ֵΪ���٣�" << *p << endl;
	cout << "p��ֵΪ���٣�" << &p << endl;
	system("pause");
	return 0;
}

