#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//���ã��������������ʵ�ʲ���ͬһ������
//���ñ����ʼ������ʼ��֮���ܸı�.

//��������ֵΪ������ʽ
//��Ҫ���ؾֲ�����������
//�����ĵ��ÿ�����Ϊ��ֵ
int& test01() {
    int a = 10;
    return a;
}

int& test02() {
    static int a = 20;//��̬�����������ȫ������ȫ�����������ڳ��������ϵͳ�ͷ�
    return a;
}
int main()
{
    int& ref = test01();//
    cout << "ref=" << ref << endl;//ref=10����һ������Ϊ�������Խ�����б���
    cout << "ref=" << ref << endl;//ref=���룬�ڶ��ν������

    int& ref2 = test02();
    cout << "ref2=" << ref2 << endl;//ref=20
    cout << "ref2=" << ref2 << endl;//ref=20

    test02() = 1000;//������������&a�����԰Ѻ�����Ϊ��ֵ��

    cout << "ref2=" << ref2 << endl;//ref=1000����Ϊref2��test02�ķ���ֵ����һ������Ѿ���&a��ֵ1000
    cout << "ref2=" << ref2 << endl;//ref=1000
    system("pause");
    return EXIT_SUCCESS;
}