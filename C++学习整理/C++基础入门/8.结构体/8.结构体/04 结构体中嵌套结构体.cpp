#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	string name;
	int age;
	int id;
	struct student stu;
};

int main() {
	teacher t;
	t.id = 1000;
	t.age = 50;
	t.stu.age = 20;
	t.stu.score = 100;
	system("pause");
	return 0;
}