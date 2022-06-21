#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//��װ������ʾ�ý��棬��void showMenu()
//��main�����е��÷�װ�õĺ���

void showMenu(){
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
//��ϵ�˽ṹ��
struct Person {
	string m_Name;
	int m_Sex;//�Ա�1�У�2Ů
	int m_Age;
	string m_Phone;
	string m_Addr;
};
#define MAX 1000
//ͨѶ¼�ṹ��
struct Addressbooks {

	struct Person personArray[MAX];//ͨѶ¼�б������ϵ������

	int m_Size;//ͨѶ¼�е�ǰ��¼��ϵ�˸���

};


//�����ϵ��
void addperson(Addressbooks *abs) {
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else {
		//��ʼ�����ϵ��
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		int sex=0;
		cout << "�������Ա�" << endl;
		cout << "1->��" << endl;
		cout << "2->Ů" << endl;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else {
				cout << "�����������������" << endl;
			}
		}
		//����
		int age=0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		//cout << abs->m_Size << endl;
		system("pause");
		system("cls");
	}
}
//2.��ʾ������ϵ��
void showPerson(Addressbooks* abs) {
	//�ж�ͨѶ¼�����Ƿ�Ϊ0�����Ϊ0����ʾ��ǰ��¼Ϊ�գ������Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0) {
		cout << "��ǰ��¼Ϊ��!" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout <<i+1<< "������" << abs->personArray[i].m_Name<<"\t";
			cout << "�Ա�"   << (abs->personArray[i].m_Sex ==1?"��":"Ů") << "\t";
			cout << "���䣺"   << abs->personArray[i].m_Age << "\t";
			cout << "�ֻ��ţ�" << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ��"   << abs->personArray[i].m_Addr << endl;;
		}
	}
	system("pause");
	system("cls");
}

//ɾ����ϵ�˹����е��ӹ��ܣ�����ɾ���������Ƿ���ͨѶ¼��

int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
		else {
			return -1;
		}
	}
}

//ɾ����ϵ��
void deletePerson(Addressbooks* abs) {
	cout << "������ɾ���˵�������" << endl;
	string name;
	cin >> name;
	int i = isExist(abs, name);
	if (i == -1) {
		cout << "������Ҫɾ������ϵ�˲�����" << endl;
		return;
	}
	else {
		cout << "������Ҫɾ������ϵ��λ��ͨѶ¼�ĵ�" << i+1 << "λ" << endl;
	}
	cout << "�Ƿ�ɾ������ϵ��(Y/N)��" << endl;
	char IsDel = 'Y';
	cin >> IsDel;
	if (IsDel == 'Y'|| IsDel == 'y') {
		for (int j = i; j < abs->m_Size;j++ ) {
			abs->personArray[j] = abs->personArray[j + 1];
		}
		cout << "ɾ���ɹ���" << endl;
		abs->m_Size--;
	}
	else if(IsDel=='N' || IsDel == 'n') {
		return;
	}
	else {
		cout << "������������" << endl;
		return;
	}
}

void findPerson(Addressbooks* abs) {

	string name;
	cin >> name;
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			cout << "�����ҵ���ϵ��λ�ڵ�" << i + 1 << "λ" << endl;
		}
		else {
			cout << "�����ҵ���ϵ�˲���ͨѶ¼��" << endl;
		}
	}
}

void modifyPerson(Addressbooks* abs) {
	cout << "�������޸���ϵ�˵�������" << endl;
	string name;
	cin >> name;
	int i = isExist(abs, name);
	if (i == -1) {
		cout << "������Ҫ�޸ĵ���ϵ�˲�����" << endl;
		return;
	}
	else {
		//��ʼ�޸���ϵ��
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[i].m_Name = name;
		//�Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1->��" << endl;
		cout << "2->Ů" << endl;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[i].m_Sex = sex;
				break;
			}
			else {
				cout << "�����������������" << endl;
			}
		}
		//����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[i].m_Age = age;
		//��ϵ�绰
		cout << "��������ϵ�绰��" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[i].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[i].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;
		system("pause");
		system("cls");
	}	
}



void clearPerson(Addressbooks* abs) {
	cout << "��ȷ��Ҫ���ͨѶ¼(Y/N)?" << endl;
	char IsDel = 'Y';
	cin >> IsDel;
	if (IsDel == 'Y' || IsDel == 'y') {
		abs->m_Size = 0;
		cout << "��ճɹ���" << endl;		
	}
	else if (IsDel == 'N' || IsDel == 'n') {
		return;
	}
	else {
		cout << "������������" << endl;
		return;
	}

}
int main()
{

	int select = 1;
	Addressbooks abs;
	abs.m_Size = 0;//��ʼ��ͨѶ¼
	while (select)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1�������ϵ��  
			addperson(&abs);
			break;
		case 2://2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3��ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4://4��������ϵ��
			findPerson(&abs);
			break;
		case 5://5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://6�������ϵ��
			clearPerson(&abs);
			break;
		case 0://0���˳�ͨѶ¼ 
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");//������˳���Ч��
			return 0;//��������
			break;
		}
	}
	


    system("pause");
    return EXIT_SUCCESS;
}