#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Man
{
	string name;
	int age;
	string sex;
};

void mansort(Man *p, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (p[j].age > p[j + 1].age) {
				Man temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

void printfman(Man *man, int len) {
	for (int i = 0; i < len; i++) {
		cout << "ÐÕÃû£º " << man[i].name << ", ÄêÁä£º " << man[i].age << ", ÐÔ±ð£º " << man[i].sex << endl;
	}
}

int main() {
	Man man[5] = {  { "Áõ±¸", 23, "ÄÐ" },
					{ "¹ØÓð", 22, "ÄÐ" },
					{ "ÕÅ·É", 20, "ÄÐ" },
					{ "ÕÔÔÆ", 21, "ÄÐ" },
					{ "õõ²õ", 19, "Å®"} };

	int len = sizeof(man) / sizeof(man[0]);
	mansort(man, len);
	printfman(man, len);
	system("pause");
	return 0;
}