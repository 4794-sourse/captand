#include <iostream>
using namespace std;
int main() {
	cout << "1" << endl;
	goto flag;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	flag:
	cout << "5" << endl;
	system("pause");
	return 0;
}