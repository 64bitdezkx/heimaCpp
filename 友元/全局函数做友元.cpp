//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building {
//    ////���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
//    friend void goodGay(Building* building);//ֻҪд��������У�����Ҫ����public/private
//      
//public:
//    Building() {
//        m_SittingRoom = "����";
//        m_BedRoom = "����";
//    }
//public:
//    string m_SittingRoom;//����
//
//private:
//    string m_BedRoom;
//
//
//};
//
////ȫ�ֺ���
//void goodGay(Building *building) {
//    cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
//    cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void test01() {
//    Building building;
//    goodGay(&building);
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