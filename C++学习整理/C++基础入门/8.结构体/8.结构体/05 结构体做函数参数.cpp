#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};
//值传递
void printfstu(student s) {
	cout << s.age << " " << s.name << " " << s.score << endl;
}

void printfstu2(student *s) {
	s->age = 100; s->score = 200;
	cout << s->age << " " << s->name << " " << s->score << endl;
}

int main() {
	student t;
	t.name = "张三";
	t.age = 50;
	t.score = 100;
	printfstu(t);
	printfstu2(&t);
	cout << t.name << " " << t.age << " " << t.score << endl;
	system("pause");
	return 0;
}