//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////���캯���ķ��ࣺ
////1����������Ϊ�� �вι�����޲ι��죨�������ṩ�ľ����޲ι��죬�ֽ�Ĭ�Ϲ��죩
////2.�����ͷ�Ϊ�� ��ͨ����Ϳ�������
////���ֵ��÷�ʽ�����ŷ� ��ʾ�� ��ʽת����
//
//
//class Person{
//public:
//    Person() {
//        cout << "�޲εĹ��캯��" << endl;
//    }
//    Person(int a ) {
//        age = a;
//        cout << "�в����Ĺ��캯��" << endl;
//    }
//    Person(const Person& p) {
//        age = p.age;
//        cout << "�������캯��" << endl;
//    }
//    ~Person()
//    {
//        cout << "��������" << endl;
//    }
//
//public:
//    int age;
//};
//
////Ĭ�ϣ������޲ι���
//void test01(){
//    Person p;//�޲ι���
//}
//
////�����вι���
//void test02(){
//    //���ŷ�������
//    Person p1(10);//�в����Ĺ��캯��
//
//    //ע�������޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ������������
//    Person p;//�޲ι���
//
//    //��ʾ��
//    Person p2 = Person(10);//�в����Ĺ��캯��,Person(10)�����вι��캯����������֮��ֵ��p2������˵�Ǹ���������ȡ�˸����ֽ�p2
//    Person p3 = Person(p2);//��������,Person(����)
//    //Person(10);// ����д������������  ��ǰ�н���֮����������
//
//    //��ʽת����
//    Person p4 = 10;// Person p4 = Person(10); //�в����Ĺ��캯��
//    Person p5 = p4;// Person p5 = Person(p4); //��������
//
//    //Person(p3);//ע���������ÿ������캯�� ��ʼ���������� ��������Ϊ�Ƕ�������������Person(p3)==Person p3;
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