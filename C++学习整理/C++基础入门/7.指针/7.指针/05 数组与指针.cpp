#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = arr; //arr����������׵�ַ
	cout << "����ָ����ʵ�һ��Ԫ��" << *p << endl;
	p++; //��ָ�����ƫ���ĸ��ֽ�
	cout << "����ָ����ʵ�һ��Ԫ��" << *p << endl;
	system("pause");
	return 0;
}