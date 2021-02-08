#include <iostream>
#include <string>
using namespace std;
int main() {
	//1.创建数据类型
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	//2.查看诗句所占空间大小
	cout << "sizeof(bool) = " << sizeof(bool) << endl;
	system("pause");
	return 0;
}