//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////C++�п������캯������ʱ��ͨ�����������
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
////2.ֵ���ݵķ�ʽ������������ֵ
////3.��ֵ��ʽ���ؾֲ�����
//
//class Person {
//public:
//	Person() {
//		cout << "�޲ι��캯��!" << endl;
//		mAge = 0;
//	}
//	Person(int age) {
//		cout << "�вι��캯��!" << endl;
//		mAge = age;
//	}
//	Person(const Person& p) {
//		cout << "�������캯��!" << endl;
//		mAge = p.mAge;
//	}
//	//�����������ͷ��ڴ�֮ǰ����
//	~Person() {
//		cout << "��������!" << endl;
//	}
//public:
//	int mAge;
//};
//
////1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01() {
//
//	Person man(100); //p�����Ѿ��������
//	Person newman(man); //���ÿ������캯��
//	Person newman2 = man; //��������  Person newman2 =Person(man);
//
//	//Person newman3;
//	//newman3 = man; //���ǵ��ÿ������캯������ֵ����
//}
//
////2. ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p1) {//�൱��Person p1 = p;����ù������������
//
//}
//void test02() {
//	Person p; //�޲ι��캯��
//	doWork(p);
//}
//
////3. ��ֵ��ʽ���ؾֲ�����
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;//��ַ��һ��
//	return p1;//���صĲ�������������p1�����ǿ�����p1���¶���
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;//��ַ��һ��
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