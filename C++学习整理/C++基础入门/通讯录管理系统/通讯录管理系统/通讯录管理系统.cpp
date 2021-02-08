#include <iostream>
#include <string>
using namespace std;
#define MAX_N 1000

void showMenu() {
	cout << "**************************" << endl;
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl;
	cout << "*****  6.清空联系人  *****" << endl;
	cout << "*****  0.退出通讯录  *****" << endl;
	cout << "**************************" << endl;
	return;
}
//联系人结构体
struct person
{
	string name;
	int m_Sex; //性别：1男 2女
	int m_Age;
	string m_phone;
	string m_adder;
};
//通讯录结构体
struct Addressbooks
{
	struct person personArray[MAX_N];
	int m_size;
};

void addPerson(Addressbooks *abs) {
	if (abs->m_size == MAX_N) {
		cout << "通讯录已满,无法添加！";
		return;
	}
	else {
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_size].name = name;
		cout << "请输入性别：" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}
		cout << "请输入年龄：" << endl;
		cin >> abs->personArray[abs->m_size].m_Age;
		cout << "请输入联系电话：" << endl;
		cin >> abs->personArray[abs->m_size].m_phone;
		cout << "请输入家庭住址：" << endl;
		cin >> abs->personArray[abs->m_size].m_adder;
		abs->m_size++;
		cout << "添加成功！" << endl;
		system("pause");//请按任意键继续
		system("cls");//清屏操作
	}
	return;
}

void showperson(Addressbooks *abs) {
	if (abs->m_size == 0) {
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << "姓名：" << abs->personArray[i].name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age<< "\t";
			cout << "电话：" << abs->personArray[i].m_phone<< "\t";
			cout << "住址：" << abs->personArray[i].m_adder << endl;
		}
		cout << "信息显示完成！" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}

int isExist(Addressbooks *abs, string name) {
	for (int i = 0; i < abs->m_size; i++) {
		if (abs->personArray[i].name == name) {
			return i;
		}
	}
	return -1;
}

void selectperson(Addressbooks *abs) {
	string name;
	cout << "请输入删除的联系人姓名：" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1){
		cout << "查无此人！" << endl;
	}
	else {
		for (int i = ret; i < abs->m_size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "删除成功！" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}

void findperson(Addressbooks *abs) {
	string name;
	cout << "请输入要查找的联系人：" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "姓名：" << abs->personArray[ret].name << "\t" << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t"
			<< "年龄：" << abs->personArray[ret].m_Age << "\t" << "电话：" << abs->personArray[ret].m_phone << "\t"
			<< "地址：" << abs->personArray[ret].m_adder << endl;
	}
	else {
		cout << "未找到此人!" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}

void modifyperson(Addressbooks *abs) {
	cout << "请输入要修改的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		string name1;
		cout << "请输入姓名：" << endl;
		cin >> name1;
		abs->personArray[ret].name = name1;
		cout << "请输入性别：" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}
		cout << "请输入年龄：" << endl;
		cin >> abs->personArray[ret].m_Age;
		cout << "请输入联系电话：" << endl;
		cin >> abs->personArray[ret].m_phone;
		cout << "请输入家庭住址：" << endl;
		cin >> abs->personArray[ret].m_adder;
		cout << "修改成功！" << endl;
	}
	else {
		cout << "查无此人！" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}

void clearperson(Addressbooks *abs) {
	abs->m_size = 0;
	cout << "通讯录已经清空" << endl;
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}

int main() {
	int select = 0;
	Addressbooks abs;
	abs.m_size = 0;
	while (true) {
		showMenu();
		cin >> select;
		switch (select) {
		case 1: {
			addPerson(&abs);
		} break;
		case 2: {
			showperson(&abs);
		} break;
		case 3: {
			selectperson(&abs);
		} break;
		case 4: {
			findperson(&abs);
		} break;
		case 5: {
			modifyperson(&abs);
		} break;
		case 6: {
			clearperson(&abs);
		} break;
		case 0: {
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
		} break;
		default: {
			cout << "输入有误请重新输入：" << endl;
		} break;
		}
	}
	system("pause");
	return 0;
}