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
//将函数中的形参改为指针，可以减少内存空间
void printfstu2(const student *s) {
	//s->age = 100; s->score = 200; 不可以修改
	cout <<"① " <<  s->age << " " << s->name << " " << s->score << endl;
}

void printfstu3(student * const s) {
	s->age = 100; s->score = 200; //不可以修改
	cout << "② " << s->age << " " << s->name << " " << s->score << endl;
}

int main() {
	student t;
	t.name = "张三";
	t.age = 50;
	t.score = 100;
	printfstu(t);
	printfstu2(&t);
	printfstu3(&t);
	cout << t.name << " " << t.age << " " << t.score << endl;
	system("pause");
	return 0;
}