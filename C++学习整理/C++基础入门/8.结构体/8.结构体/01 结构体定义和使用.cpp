#include <iostream>
using namespace std;

//1.����ѧ���������ͣ�ѧ�������������� ���䣬������
//struct �ṹ���� { �ṹ���Ա�б� }
struct Student
{
	string name;
	int age;
	int score;
} s3;
//2.ͨ��ѧ�����ʹ�������ѧ��
// 2.1 struct Student s1;
// 2.2 struct Student s2 = {...};
// 2.3 �ڶ���ṹ����˳�㴴���ṹ�����
int main() {
	
	struct Student s1;
	s1.name = "����"; s1.age = 17; s1.score = 99;
	
	struct Student s2 = {"����", 18, 90};

	s3.name = "����"; s3.age = 23; s3.score = 100;
	
	system("pause");
	return 0;
}