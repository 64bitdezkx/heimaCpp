//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//class Building {
//
//    friend class GoodGay;// GoodGay����Building�����Ԫ�����Է���Building�����������
//
//public:
//    Building();
//    
//public:
//    string m_SittingRoom;//����
//
//private:
//    string m_BedRoom;
//};
//
//
//class GoodGay {
//public:
//    Building building;
//public:
//    void visit();
//    
//};
//
////���캯�����ⲿʵ��
//
//Building::Building() {
//    Building::m_SittingRoom = "����";
//    Building::m_BedRoom = "����";
//};
////��Ա�������ⲿʵ��
//void GoodGay::visit() {
//    cout << "" << building.m_BedRoom << endl;
//};
//
//void test01() {
//    GoodGay goodgay;
//    goodgay.visit();
//}
//
//int main()
//{
//    test01();
//
//
//    system("pause");
//    return EXIT_SUCCESS;
//}