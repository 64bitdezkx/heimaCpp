#include<iostream>
using namespace std;
#include"swap.h"//˫���ű�ʾ�Լ������ͷ�ļ�

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
}