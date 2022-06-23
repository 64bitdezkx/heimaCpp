//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////构造函数的分类：
////1，按参数分为： 有参构造和无参构造（编译器提供的就是无参构造，又叫默认构造）
////2.按类型分为： 普通构造和拷贝构造
////三种调用方式：括号法 显示法 隐式转换法
//
//
//class Person{
//public:
//    Person() {
//        cout << "无参的构造函数" << endl;
//    }
//    Person(int a ) {
//        age = a;
//        cout << "有参数的构造函数" << endl;
//    }
//    Person(const Person& p) {
//        age = p.age;
//        cout << "拷贝构造函数" << endl;
//    }
//    ~Person()
//    {
//        cout << "析构函数" << endl;
//    }
//
//public:
//    int age;
//};
//
////默认，调用无参构造
//void test01(){
//    Person p;//无参构造
//}
//
////调用有参构造
//void test02(){
//    //括号法，常用
//    Person p1(10);//有参数的构造函数
//
//    //注：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明；
//    Person p;//无参构造
//
//    //显示法
//    Person p2 = Person(10);//有参数的构造函数,Person(10)调用有参构造函数创建对象之后赋值给p2，或者说是给匿名函数取了个名字叫p2
//    Person p3 = Person(p2);//拷贝构造,Person(对象)
//    //Person(10);// 单独写就是匿名对象  当前行结束之后，马上析构
//
//    //隐式转换法
//    Person p4 = 10;// Person p4 = Person(10); //有参数的构造函数
//    Person p5 = p4;// Person p5 = Person(p4); //拷贝构造
//
//    //Person(p3);//注：不能利用拷贝构造函数 初始化匿名函数 编译器认为是对象声明，例：Person(p3)==Person p3;
//}
//
//
//int main02()
//{
//    test01();
//    test02();
//
//
//    system("pause");
//    return EXIT_SUCCESS;
//}