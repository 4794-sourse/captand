#include <iostream>
using namespace std;

//1.创建学生数据类型：学生包括（姓名， 年龄，分数）
//struct 结构体名 { 结构体成员列表 }
struct Student
{
	string name;
	int age;
	int score;
} s3;
//2.通过学生类型创建具体学生
// 2.1 struct Student s1;
// 2.2 struct Student s2 = {...};
// 2.3 在定义结构体是顺便创建结构体变量
int main() {
	
	struct Student s1;
	s1.name = "李四"; s1.age = 17; s1.score = 99;
	
	struct Student s2 = {"张三", 18, 90};

	s3.name = "王五"; s3.age = 23; s3.score = 100;
	
	system("pause");
	return 0;
}