#include <iostream>
using namespace std;
int main() {
	//while
	int i = 0, j = 10;
	while (i < 10) {
		cout << i << " ";
		i++;
	}
	cout << endl;
	//for
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
	}
	cout << endl;
	//do - while 
	do {
		cout << j << " ";
		j++;
	} while (j < 10);
	system("pause");
	return 0;
}