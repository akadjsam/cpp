//// 자바에서는 public 상속만 지원
//// c++ 에서는 public, protected, private 상속 지원
////protected, private 상속은 잘 사용하지 않음 객체지향 원칙에 위배되어 버그가 생길 수 있기 떄문에
//// - 은 private, #은 protected, +는 public
////invocation : 생성자 소멸자 연산은 자식 클래스가 부모클래스로부터 상속받지 못한다.
////클래스에 final 키워드가 붙으면 더이상 상속받을 수 없다.(상속을 더이상 하고 싶지 않으면 끝에 final 키워드를 붙여서 대를 끊음)
//#include <iostream>
//#include "student.h"
//#include <string>
//using namespace std;
//int main()
//{
//    // Person 객체 인스턴스화하고 사용
//    Person person;
//    person.setId(222222222L);
//    //person.setGAP(4.5); // 부모는 자식 클래스의 메서드를 사용할 수 없다.
//    cout << "Person 객체의 정보: " << endl;
//    cout << "사람의 구분 번호: " << person.getId();
//    cout << endl << endl;
//    //Student 클래스 인스턴스화하고 사용
//    Student student;
//    student.set(222222222L,4.5);
//    Student s2;
//    s2.setId(222222222L);
//    s2.setGPA(4.5);
//    cout << "s2 객체의 정보: " << endl;
//    cout << "학생의 구분 번호: " << s2.getId() << endl;
//    cout << "학생의 학점: " << s2.getGPA() << endl;
//
//    Student s3(222222222L,3.78);
//    cout << "s3 객체의 정보: " << endl;
//    cout << "학생의 구분 번호: " << s3.getId() << endl;
//    cout << "학생의 학점: " << s3.getGPA() << endl;
//    return 0;
//}