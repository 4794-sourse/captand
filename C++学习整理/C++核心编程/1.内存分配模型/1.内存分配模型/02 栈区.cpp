#include <iostream>
using namespace std;
//ջ������ע���������Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ٺ��ͷ�

int *func(int b) { //�β�����Ҳ�����ջ��
	int b = 100;
	int a = 10;//�ֲ����� �����ջ����ջ���������ں���ִ������Զ��ͷ�
	return &a;//���ؾֲ������ĵ�ַ
}

int main() {
	//����func�ĺ�������ֵ
	int *p = func(10);
	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ�����֣�����Ϊ���������˱���
	cout << *p << endl;//����
	system("pause");
	return 0;
}