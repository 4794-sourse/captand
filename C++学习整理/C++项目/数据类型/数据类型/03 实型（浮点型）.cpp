#include <iostream>
using namespace std;
int main() {
	float f1 = 3.14f;
	double d1 = 3.1415;
	//Ĭ����������һ��С��������ʾ��6λ��Ч����
	cout << "f1 = " << f1 << endl;
	cout << "d1 = " << d1 << endl;
	//����sizeof���ռ�ÿռ�
	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	//��ѧ������
	float f2 = 3e2; //3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2; //3 * 10 ^ 2
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;
}