#include <iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//const���ε�ȫ�ֳ���
const int g_c = 10;
const int g_d = 10;
int main() {
	//ȫ������ȫ�ֱ�������̬����������

	//������ͨ�ֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַ��" << (int)&b << endl;
	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַ��" << (int)&g_b << endl;

	//��̬���� ����ͨ����ǰ�����static,���ھ�̬����
	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַ��" << (int)&s_b << endl;

	//�������ַ���������const���εı���
	cout << "�ַ��������ĵ�ַΪ��" << (int)&"hello world" << endl;

	//const���εı�������const���ε�ȫ�ֱ���  ��const���εľֲ�����
	cout << "ȫ�ֳ���g_c�ĵ�ַΪ��" << (int)&g_c << endl;
	cout << "ȫ�ֳ���g_d�ĵ�ַΪ��" << (int)&g_d << endl;
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַΪ��" << (int)&c_l_b << endl;
	system("pause");
	return 0;
}