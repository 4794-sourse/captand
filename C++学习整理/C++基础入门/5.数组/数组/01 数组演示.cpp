#include <iostream>
using namespace std;
int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	//1.ͨ��sizeof�鿴����
	cout << "sizeof(arr[0]) = " << sizeof(arr[0]) << endl;
	cout << "sizeof(arr) = " << sizeof(arr) << endl;
	cout << "����Ԫ�ش�С =" << sizeof(arr) / sizeof(arr[0])<< endl;
	//2.ͨ���������鿴�����׵�ַ���������ǳ��������Ը�ֵ
	cout << "�����׵�ַΪ��" << (int)arr << "��" << arr << endl;
	cout << "�����һ��Ԫ�صĵ�ַΪ��" << (int)&arr[0] << "��" << &arr[0] << endl;
	cout << "����ڶ���Ԫ�صĵ�ַΪ��" << (int)&arr[1] << "��" << &arr[1] << endl;
	system("pause");
	return 0;
}