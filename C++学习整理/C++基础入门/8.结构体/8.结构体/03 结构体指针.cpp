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
	//1.创建学生结构体变量
	struct Student s = { "张三", 18, 100 };
	//2.通过指针指向结构体变量
	Student *p = &s;
	//3.通过指针访问结构体变量中的数据
	cout << p->age << " " << p->name << " " << p->score << endl;
	system("pause");
	return 0;
}