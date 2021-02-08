#include <iostream>
#include <string>
using namespace std;
#define MAX_N 1000

void showMenu() {
	cout << "**************************" << endl;
	cout << "*****  1.�����ϵ��  *****" << endl;
	cout << "*****  2.��ʾ��ϵ��  *****" << endl;
	cout << "*****  3.ɾ����ϵ��  *****" << endl;
	cout << "*****  4.������ϵ��  *****" << endl;
	cout << "*****  5.�޸���ϵ��  *****" << endl;
	cout << "*****  6.�����ϵ��  *****" << endl;
	cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
	cout << "**************************" << endl;
	return;
}
//��ϵ�˽ṹ��
struct person
{
	string name;
	int m_Sex; //�Ա�1�� 2Ů
	int m_Age;
	string m_phone;
	string m_adder;
};
//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct person personArray[MAX_N];
	int m_size;
};

void addPerson(Addressbooks *abs) {
	if (abs->m_size == MAX_N) {
		cout << "ͨѶ¼����,�޷���ӣ�";
		return;
	}
	else {
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_size].name = name;
		cout << "�������Ա�" << endl;
		cout << "1������" << endl;
		cout << "2����Ů" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}
		cout << "���������䣺" << endl;
		cin >> abs->personArray[abs->m_size].m_Age;
		cout << "��������ϵ�绰��" << endl;
		cin >> abs->personArray[abs->m_size].m_phone;
		cout << "�������ͥסַ��" << endl;
		cin >> abs->personArray[abs->m_size].m_adder;
		abs->m_size++;
		cout << "��ӳɹ���" << endl;
		system("pause");//�밴���������
		system("cls");//��������
	}
	return;
}

void showperson(Addressbooks *abs) {
	if (abs->m_size == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << "������" << abs->personArray[i].name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age<< "\t";
			cout << "�绰��" << abs->personArray[i].m_phone<< "\t";
			cout << "סַ��" << abs->personArray[i].m_adder << endl;
		}
		cout << "��Ϣ��ʾ��ɣ�" << endl;
	}
	system("pause");//�밴���������
	system("cls");//��������
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
	cout << "������ɾ������ϵ��������" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1){
		cout << "���޴��ˣ�" << endl;
	}
	else {
		for (int i = ret; i < abs->m_size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "ɾ���ɹ���" << endl;
	}
	system("pause");//�밴���������
	system("cls");//��������
	return;
}

void findperson(Addressbooks *abs) {
	string name;
	cout << "������Ҫ���ҵ���ϵ�ˣ�" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "������" << abs->personArray[ret].name << "\t" << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t"
			<< "���䣺" << abs->personArray[ret].m_Age << "\t" << "�绰��" << abs->personArray[ret].m_phone << "\t"
			<< "��ַ��" << abs->personArray[ret].m_adder << endl;
	}
	else {
		cout << "δ�ҵ�����!" << endl;
	}
	system("pause");//�밴���������
	system("cls");//��������
	return;
}

void modifyperson(Addressbooks *abs) {
	cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		string name1;
		cout << "������������" << endl;
		cin >> name1;
		abs->personArray[ret].name = name1;
		cout << "�������Ա�" << endl;
		cout << "1������" << endl;
		cout << "2����Ů" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}
		cout << "���������䣺" << endl;
		cin >> abs->personArray[ret].m_Age;
		cout << "��������ϵ�绰��" << endl;
		cin >> abs->personArray[ret].m_phone;
		cout << "�������ͥסַ��" << endl;
		cin >> abs->personArray[ret].m_adder;
		cout << "�޸ĳɹ���" << endl;
	}
	else {
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");//�밴���������
	system("cls");//��������
	return;
}

void clearperson(Addressbooks *abs) {
	abs->m_size = 0;
	cout << "ͨѶ¼�Ѿ����" << endl;
	system("pause");//�밴���������
	system("cls");//��������
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
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
		} break;
		default: {
			cout << "�����������������룺" << endl;
		} break;
		}
	}
	system("pause");
	return 0;
}