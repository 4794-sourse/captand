#include <iostream>
using namespace std;
int main() {
	//1.字符型变量创建方式
	char ch = 'a';
	//2.字符型变量所占内存大小
	cout << "sizeof(a) = " << sizeof(ch) << endl;
	//3.字符型变量常见错误
		//1.char ch2 = "b"; 创建字符型变量要用单引号
		//2.char ch2 = "abcdf"  只能是单个字符
	//4.字符型对应ASCII编码
	cout << (int)ch << endl;
	system("pause");
	return 0;
}