#include <iostream>
using namespace std;
int main() {
	float f1 = 3.14f;
	double d1 = 3.1415;
	//默认情况下输出一个小数，会显示出6位有效数字
	cout << "f1 = " << f1 << endl;
	cout << "d1 = " << d1 << endl;
	//利用sizeof算出占用空间
	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	//科学技术法
	float f2 = 3e2; //3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2; //3 * 10 ^ 2
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;
}