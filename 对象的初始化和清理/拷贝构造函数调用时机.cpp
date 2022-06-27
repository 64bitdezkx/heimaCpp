//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////C++中拷贝构造函数调用时机通常有三种情况
////1.使用一个已经创建完毕的对象来初始化一个新对象
////2.值传递的方式给函数参数传值
////3.以值方式返回局部对象
//
//class Person {
//public:
//	Person() {
//		cout << "无参构造函数!" << endl;
//		mAge = 0;
//	}
//	Person(int age) {
//		cout << "有参构造函数!" << endl;
//		mAge = age;
//	}
//	Person(const Person& p) {
//		cout << "拷贝构造函数!" << endl;
//		mAge = p.mAge;
//	}
//	//析构函数在释放内存之前调用
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int mAge;
//};
//
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//
//	Person man(100); //p对象已经创建完毕
//	Person newman(man); //调用拷贝构造函数
//	Person newman2 = man; //拷贝构造  Person newman2 =Person(man);
//
//	//Person newman3;
//	//newman3 = man; //不是调用拷贝构造函数，赋值操作
//}
//
////2. 值传递的方式给函数参数传值
//void doWork(Person p1) {//相当于Person p1 = p;会调用构造和析构函数
//
//}
//void test02() {
//	Person p; //无参构造函数
//	doWork(p);
//}
//
////3. 以值方式返回局部对象
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;//地址不一样
//	return p1;//返回的不是上面声明的p1，而是拷贝的p1的新对象。
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;//地址不一样
//}
//
//int main()
//{
//
//	//test01();
//	//test02();
//	test03();
//
//
//
//    system("pause");
//    return EXIT_SUCCESS;
//}