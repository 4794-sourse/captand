#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int *p = &a;
	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(p) = " << sizeof(int *) << endl;
	cout << "sizeof(p) = " << sizeof(char *) << endl;
	cout << "sizeof(p) = " << sizeof(double *) << endl;
	system("pause");
	return 0;
}

