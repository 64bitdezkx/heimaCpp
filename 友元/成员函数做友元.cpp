#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
class GoodGay {
public:
    
    GoodGay() {
        building = new Building;//buildingָ��ָ�����new Building����
    }
    void visit();//visit���Է���Building���˽�г�Ա

private:   
    Building *building;
};
//����ʵ�ֳ�Ա����
void GoodGay::visit() {
    cout << building->m_BedRoom << endl;
}


class Building {
    friend void GoodGay::visit();//���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������

public:
    Building(){
        this->m_SittingRoom = "����";
        this->m_BedRoom = "����";
    }
public:
    string m_SittingRoom;//����

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