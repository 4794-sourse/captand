#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
} ;

int main() {

	struct Student stu[3] = {
		{"李四", 18, 20},
		{"张三", 19, 30},
		{"王五", 20, 40}
	};
	
	for (int i = 0; i < 3; i++) {
		cout << stu[i].age << " " << stu[i].score << " " << stu[i].name << endl;
	}
	system("pause");
	return 0;
}