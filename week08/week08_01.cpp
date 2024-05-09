//함수에 const 키워드 쓰기
//멤버 변수의 값을 변경하지 않는 메서드에서만 사용

// 어떤 의미인가
// 1. 다른 개발자에게 이 함수의 멤버 변수의 값은 변경하지 않는다 라는 메세지
// 2. 실수로 멤버변수의 값을 바꾸려고 시도할 때 컴파일러 단에서 오류 메세지를 보내줌
// 3. const 객체를 사용해서 해당  함수를 호출 할 수 있다.
 
//#include "point.h"
//#include <iostream>
//using namespace std;
//void Area(const Point& pt) { //여기서 읽기 전용으로 받고 있음 (pt는 레퍼런스 객체), const가 아닌 멤버 메서드를 호출하는 것이 안됨
//	//vs는 메서드 중에 멤버 변수의 값을 변경한다고 생각하는 것들을 배제한다.
//	int area = pt.getX() * pt.getY(); // getY()에 const 키워드가 없으면 문법적으로 getY()를 호출할 수 없다. 
//	cout << "0,0과 이 점이 이루는 사각형의 면적 = " << area << endl;
//}
//
//int main() {
//	Point pt(100,100);
//	Area(pt);
//
//	return 0;
//}