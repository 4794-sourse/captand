#include <iostream>
using namespace std;
int main() {
	//1.�ַ��ͱ���������ʽ
	char ch = 'a';
	//2.�ַ��ͱ�����ռ�ڴ��С
	cout << "sizeof(a) = " << sizeof(ch) << endl;
	//3.�ַ��ͱ�����������
		//1.char ch2 = "b"; �����ַ��ͱ���Ҫ�õ�����
		//2.char ch2 = "abcdf"  ֻ���ǵ����ַ�
	//4.�ַ��Ͷ�ӦASCII����
	cout << (int)ch << endl;
	system("pause");
	return 0;
}