#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//void swap(int a, int b) {
//    int temp = a;
//    a = b;
//    b = temp;
//    cout << "a:" << a << endl;
//    cout << "b:" << b << endl; 
//}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    system("pause");
    return EXIT_SUCCESS;
}