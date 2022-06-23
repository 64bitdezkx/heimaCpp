#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void TestFunc01(int a, int b, int) {
	//函数内部无法使用占位参数
	cout << "a + b = " << a + b << endl;
}
//占位参数也可以设置默认值
void TestFunc02(int a, int b, int = 20) {
	//函数内部依旧无法使用占位参数
	cout << "a + b = " << a + b << endl;
}


int main()
{

	//错误调用，占位参数也是参数，必须传参数
	//TestFunc01(10,20); 
	//正确调用
	TestFunc01(10, 20, 30);
	//正确调用
	TestFunc02(10, 20);
	//正确调用
	TestFunc02(10, 20, 30);


    system("pause");
    return EXIT_SUCCESS;
}