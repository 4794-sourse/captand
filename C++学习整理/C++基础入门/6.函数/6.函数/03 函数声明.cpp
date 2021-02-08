#include <iostream>
using namespace std;

int Max(int, int);
int Max(int a, int b);

int main() {
	int a, b;
	cin >> a >> b;
	cout << Max(a, b) << endl;
	system("pause");
	return 0;
}

int Max(int a, int b) {
	return a > b ? a : b;
}