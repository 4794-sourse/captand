#include <iostream>
using namespace std;

int main() {
	int *p = NULL;
	//用于初始化
	*p = 100;
	//0-255之间的编号是系统占用内存， 不允许用户访问
	system("pause");
	return 0;
}