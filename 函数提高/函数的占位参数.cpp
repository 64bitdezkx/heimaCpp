#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void TestFunc01(int a, int b, int) {
	//�����ڲ��޷�ʹ��ռλ����
	cout << "a + b = " << a + b << endl;
}
//ռλ����Ҳ��������Ĭ��ֵ
void TestFunc02(int a, int b, int = 20) {
	//�����ڲ������޷�ʹ��ռλ����
	cout << "a + b = " << a + b << endl;
}


int main()
{

	//������ã�ռλ����Ҳ�ǲ��������봫����
	//TestFunc01(10,20); 
	//��ȷ����
	TestFunc01(10, 20, 30);
	//��ȷ����
	TestFunc02(10, 20);
	//��ȷ����
	TestFunc02(10, 20, 30);


    system("pause");
    return EXIT_SUCCESS;
}