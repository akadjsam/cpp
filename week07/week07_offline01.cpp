//// �ڹٿ����� public ��Ӹ� ����
//// c++ ������ public, protected, private ��� ����
////protected, private ����� �� ������� ���� ��ü���� ��Ģ�� ����Ǿ� ���װ� ���� �� �ֱ� ������
//// - �� private, #�� protected, +�� public
////invocation : ������ �Ҹ��� ������ �ڽ� Ŭ������ �θ�Ŭ�����κ��� ��ӹ��� ���Ѵ�.
////Ŭ������ final Ű���尡 ������ ���̻� ��ӹ��� �� ����.(����� ���̻� �ϰ� ���� ������ ���� final Ű���带 �ٿ��� �븦 ����)
//#include <iostream>
//#include "student.h"
//#include <string>
//using namespace std;
//int main()
//{
//    // Person ��ü �ν��Ͻ�ȭ�ϰ� ���
//    Person person;
//    person.setId(222222222L);
//    //person.setGAP(4.5); // �θ�� �ڽ� Ŭ������ �޼��带 ����� �� ����.
//    cout << "Person ��ü�� ����: " << endl;
//    cout << "����� ���� ��ȣ: " << person.getId();
//    cout << endl << endl;
//    //Student Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
//    Student student;
//    student.set(222222222L,4.5);
//    Student s2;
//    s2.setId(222222222L);
//    s2.setGPA(4.5);
//    cout << "s2 ��ü�� ����: " << endl;
//    cout << "�л��� ���� ��ȣ: " << s2.getId() << endl;
//    cout << "�л��� ����: " << s2.getGPA() << endl;
//
//    Student s3(222222222L,3.78);
//    cout << "s3 ��ü�� ����: " << endl;
//    cout << "�л��� ���� ��ȣ: " << s3.getId() << endl;
//    cout << "�л��� ����: " << s3.getGPA() << endl;
//    return 0;
//}