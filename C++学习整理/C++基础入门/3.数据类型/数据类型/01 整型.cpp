#include <iostream>
using namespace std;
int main() {
	short num1 = 10; //(-32,768 ~ 32£¬767)
	int num2 = 10; //(-2,147,483,648 ~ 2,147,483,647)
	long num3 = 10;//(-2,147,483,648 ~ 2,147,483,647)
	long long num4 = 10; //(-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807)
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	system("pause");
	return 0;
}