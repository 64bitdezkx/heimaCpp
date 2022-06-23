#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//class Person {
//    //1.构造函数不需要返回值，不用写void
//public:
//    Person() {
//        cout << "Person的构造函数的调用" << endl;
//    }
//    ~Person() {
//        cout << "Person的析构函数的调用" << endl;
//    }
//};
//
//void test1() {
//    Person p;//在栈上的数据，test01执行完之后，释放这个对象
//}
//
//int main01()
//{
//    test1();
//
//    Person p;//在main函数中，对象创建之后不会像其他函数结束之后那样释放对象，会在程序运行结束的时候运行析构函数(点了任意键结束程序之后)。
//
//    system("pause");
//    return EXIT_SUCCESS;
//}