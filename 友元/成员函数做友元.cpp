#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
class GoodGay {
public:
    
    GoodGay() {
        building = new Building;//building指针指向堆区new Building对象
    }
    void visit();//visit可以访问Building类的私有成员

private:   
    Building *building;
};
//类外实现成员函数
void GoodGay::visit() {
    cout << building->m_BedRoom << endl;
}


class Building {
    friend void GoodGay::visit();//告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容

public:
    Building(){
        this->m_SittingRoom = "客厅";
        this->m_BedRoom = "卧室";
    }
public:
    string m_SittingRoom;//客厅

private:
    string m_BedRoom;
};

void test02() {
    GoodGay goodgay;
    goodgay.visit();
}
int main()
{
    test02();


    system("pause");
    return EXIT_SUCCESS;
}