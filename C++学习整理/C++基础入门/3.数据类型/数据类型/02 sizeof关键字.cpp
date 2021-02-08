#include <iostream>
using namespace std;
int main() {
	//利用sizeof求出数据类型占用内存大小
	short num1 = 10;
	cout << "short占用的内存空间为： " << sizeof(short) << endl;
	cout << "num1占用的内存空间为： " << sizeof(num1) << endl;
	system("pause");
	return 0;
}