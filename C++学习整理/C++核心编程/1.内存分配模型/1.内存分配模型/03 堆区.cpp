#include <iostream>
using namespace std;

int *func() {
	//����new�ؼ���  ���Խ����ݿ��ٵ�����
	//ָ�� ������Ҳ�Ǿֲ�����������ջ����ָ�뱣��������Ƿ��ڶ���
	int *p = new int(10);
	cout << (int)&p << endl;
	return p;
}

int main() {
	//�ڶ�����������
	int *p1 = func();
	cout << *p1 << endl;
	cout << *p1 << endl; 
	cout << (int)&p1 << endl;
	system("pause");
	return 0;
}