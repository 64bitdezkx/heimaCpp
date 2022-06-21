#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//封装函数显示该界面，如void showMenu()
//在main函数中调用封装好的函数

void showMenu(){
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}
//联系人结构体
struct Person {
	string m_Name;
	int m_Sex;//性别1男，2女
	int m_Age;
	string m_Phone;
	string m_Addr;
};
#define MAX 1000
//通讯录结构体
struct Addressbooks {

	struct Person personArray[MAX];//通讯录中保存的联系人数组

	int m_Size;//通讯录中当前记录联系人个数

};


//添加联系人
void addperson(Addressbooks *abs) {
	//判断通讯录是否已满，如果满了就不再添加
	if (abs->m_Size == MAX) {
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else {
		//开始添加联系人
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		int sex=0;
		cout << "请输入性别：" << endl;
		cout << "1->男" << endl;
		cout << "2->女" << endl;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else {
				cout << "输入错误，请重新输入" << endl;
			}
		}
		//年龄
		int age=0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功" << endl;
		//cout << abs->m_Size << endl;
		system("pause");
		system("cls");
	}
}
//2.显示所有联系人
void showPerson(Addressbooks* abs) {
	//判断通讯录人数是否为0，如果为0，提示当前记录为空，如果不为0，显示记录的联系人信息
	if (abs->m_Size == 0) {
		cout << "当前记录为空!" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout <<i+1<< "姓名：" << abs->personArray[i].m_Name<<"\t";
			cout << "性别："   << (abs->personArray[i].m_Sex ==1?"男":"女") << "\t";
			cout << "年龄："   << abs->personArray[i].m_Age << "\t";
			cout << "手机号：" << abs->personArray[i].m_Phone << "\t";
			cout << "地址："   << abs->personArray[i].m_Addr << endl;;
		}
	}
	system("pause");
	system("cls");
}

//删除联系人功能中的子功能，查找删除人姓名是否在通讯录里

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

//删除联系人
void deletePerson(Addressbooks* abs) {
	cout << "请输入删除人的姓名：" << endl;
	string name;
	cin >> name;
	int i = isExist(abs, name);
	if (i == -1) {
		cout << "您所想要删除的联系人不存在" << endl;
		return;
	}
	else {
		cout << "您所想要删除的联系人位于通讯录的第" << i+1 << "位" << endl;
	}
	cout << "是否删除该联系人(Y/N)？" << endl;
	char IsDel = 'Y';
	cin >> IsDel;
	if (IsDel == 'Y'|| IsDel == 'y') {
		for (int j = i; j < abs->m_Size;j++ ) {
			abs->personArray[j] = abs->personArray[j + 1];
		}
		cout << "删除成功！" << endl;
		abs->m_Size--;
	}
	else if(IsDel=='N' || IsDel == 'n') {
		return;
	}
	else {
		cout << "您的输入有误！" << endl;
		return;
	}
}

void findPerson(Addressbooks* abs) {

	string name;
	cin >> name;
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			cout << "所查找的联系人位于第" << i + 1 << "位" << endl;
		}
		else {
			cout << "所查找的联系人不在通讯录！" << endl;
		}
	}
}

void modifyPerson(Addressbooks* abs) {
	cout << "请输入修改联系人的姓名：" << endl;
	string name;
	cin >> name;
	int i = isExist(abs, name);
	if (i == -1) {
		cout << "您所想要修改的联系人不存在" << endl;
		return;
	}
	else {
		//开始修改联系人
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[i].m_Name = name;
		//性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1->男" << endl;
		cout << "2->女" << endl;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[i].m_Sex = sex;
				break;
			}
			else {
				cout << "输入错误，请重新输入" << endl;
			}
		}
		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[i].m_Age = age;
		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		abs->personArray[i].m_Phone = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[i].m_Addr = address;
		cout << "修改成功" << endl;
		system("pause");
		system("cls");
	}	
}



void clearPerson(Addressbooks* abs) {
	cout << "您确定要清空通讯录(Y/N)?" << endl;
	char IsDel = 'Y';
	cin >> IsDel;
	if (IsDel == 'Y' || IsDel == 'y') {
		abs->m_Size = 0;
		cout << "清空成功！" << endl;		
	}
	else if (IsDel == 'N' || IsDel == 'n') {
		return;
	}
	else {
		cout << "您的输入有误！" << endl;
		return;
	}

}
int main()
{

	int select = 1;
	Addressbooks abs;
	abs.m_Size = 0;//初始化通讯录
	while (select)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1、添加联系人  
			addperson(&abs);
			break;
		case 2://2、显示联系人
			showPerson(&abs);
			break;
		case 3://3、删除联系人
			deletePerson(&abs);
			break;
		case 4://4、查找联系人
			findPerson(&abs);
			break;
		case 5://5、修改联系人
			modifyPerson(&abs);
			break;
		case 6://6、清空联系人
			clearPerson(&abs);
			break;
		case 0://0、退出通讯录 
			cout << "欢迎下次使用！" << endl;
			system("pause");//任意键退出的效果
			return 0;//结束函数
			break;
		}
	}
	


    system("pause");
    return EXIT_SUCCESS;
}