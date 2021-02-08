#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct student
{
	string name;
	int score;
};

struct teacher
{
	string name;
	struct student stu[5];
} tea[3];

void scanftea(teacher *t, int len) {
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++) {
		t[i].name = "teacher_";
		t[i].name += nameseed[i];
		for (int j = 0; j < 5; j++) {
			t[i].stu[j].name = "student_";
			t[i].stu[j].name += nameseed[i];
			
			int score = rand() % 100 + 1;
			t[i].stu[j].score = score;
		}
	}
}

void printtea(teacher *t, int len) {
	for (int i = 0; i < len; i++) {
		cout << "��ʦ������" << t[i].name << endl;
		cout << t[i].name  <<" ��ʦ��ѧ����" << endl;
		for (int j = 0; j < 5; j++) {
			cout << "������ " << t[i].stu[j].name << " , ������" << t[i].stu[j].score << endl;
		}
	}
}

int main() {
	//���������
	srand((unsigned int)time(NULL));
	srand(time(0));
	int len = sizeof(tea) / sizeof(tea[0]);
	scanftea(tea, len);
	printtea(tea, len);
	system("pause");
	return 0;
}