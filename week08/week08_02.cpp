//#include "point.h"
//#include <iostream>
//using namespace std;
//
//typedef void (*FP1)(int); //함수 포인터
//typedef void (Point::*FP2)(int); // 클래스의 멤버함수 참조용 함수 포인터
//
//void Area(const Point& pt) { //여기서 읽기 전용으로 받고 있음 (pt는 레퍼런스 객체), const가 아닌 멤버 메서드를 호출하는 것이 안됨
//	//vs는 메서드 중에 멤버 변수의 값을 변경한다고 생각하는 것들을 배제한다.
//	int area = pt.getX() * pt.getY(); // getY()에 const 키워드가 없으면 문법적으로 getY()를 호출할 수 없다. 
//	cout << "0,0과 이 점이 이루는 사각형의 면적 = " << area << endl;
//}
//
//
//int main() {
//	Point pt(100, 100);
//	//Area(pt);
//	//pt.setX(-50);
//	// 
//	//FP1 fp1 = &Point::setY;
//	FP2 fp2 = &Point::setY; // Point 클래스의 setY 멤버함수의 주소를 전달.
//	(pt.*fp2)(50); //앞에 ()를 해줘야 연산자 우선순위에 의해서 제대로 사용할 수 있음
//
//	pt.Print();
//	return 0;
//}
//
////typedef unsigned int* ui_ptr;
////unsigned int a = 100000;/unsigned int* pui = &a;
////ui_ptr pui = &a; //줄여서 사용할 수 있다. 자료타입의 별명을 만들어 줌. 함수포인터에도 적용 가능함.
////cout << *pui << endl;