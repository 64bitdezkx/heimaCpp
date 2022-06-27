//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//class Building {
//
//    friend class GoodGay;// GoodGay类是Building类的友元，可以访问Building类的所有属性
//
//public:
//    Building();
//    
//public:
//    string m_SittingRoom;//客厅
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
////构造函数在外部实现
//
//Building::Building() {
//    Building::m_SittingRoom = "客厅";
//    Building::m_BedRoom = "卧室";
//};
////成员函数在外部实现
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