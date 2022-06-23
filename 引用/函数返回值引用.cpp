#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//引用：给变量起别名，实际操作同一个对象
//引用必须初始化，初始化之后不能改变.

//函数返回值为引用形式
//不要返回局部函数的引用
//函数的调用可以作为左值
int& test01() {
    int a = 10;
    return a;
}

int& test02() {
    static int a = 20;//静态变量，存放在全局区，全局区的数据在程序结束后系统释放
    return a;
}
int main()
{
    int& ref = test01();//
    cout << "ref=" << ref << endl;//ref=10，第一次是因为编译器对结果进行保留
    cout << "ref=" << ref << endl;//ref=乱码，第二次结果错误

    int& ref2 = test02();
    cout << "ref2=" << ref2 << endl;//ref=20
    cout << "ref2=" << ref2 << endl;//ref=20

    test02() = 1000;//函数返回引用&a，可以把函数作为左值，

    cout << "ref2=" << ref2 << endl;//ref=1000，因为ref2是test02的返回值，上一条语句已经给&a赋值1000
    cout << "ref2=" << ref2 << endl;//ref=1000
    system("pause");
    return EXIT_SUCCESS;
}