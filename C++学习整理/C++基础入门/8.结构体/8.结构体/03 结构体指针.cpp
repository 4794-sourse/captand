#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

int main() {
	//1.����ѧ���ṹ�����
	struct Student s = { "����", 18, 100 };
	//2.ͨ��ָ��ָ��ṹ�����
	Student *p = &s;
	//3.ͨ��ָ����ʽṹ������е�����
	cout << p->age << " " << p->name << " " << p->score << endl;
	system("pause");
	return 0;
}