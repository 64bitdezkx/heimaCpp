#include<iostream>
using namespace std;
#include"swap.h"//双引号表示自己定义的头文件

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
}