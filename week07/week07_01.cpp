//#include <iostream>
//
//using namespace std;
//
//class NeddConstructor {
//public:
//	const int max;
//	int& ref;
//	int temp;
//	NeddConstructor();
//	NeddConstructor(int cnt, int& number);
//};
//NeddConstructor::NeddConstructor():max(100),ref(temp) {
//	//max = 100;
//	//ref = temp;
//	temp = 10;
//}
//
//NeddConstructor::NeddConstructor(int cnt, int& number) :max(cnt), ref(number) {
//	//max = 100;
//	//ref = temp;
//	temp = 10;
//}
//
//
//int main() {
//	//NeddConstructor cr;
//	int num = 400;
//	NeddConstructor cr(500,num);
//	/*cr.max = 100;*/
//	cout << cr.max << endl;
//	cout << cr.ref << endl;
//	cr.ref = cr.temp;
//}
//구조체와 클래스의 차이
//1. class 키워드 사용
//2. public과 같은 접근제어와 관련된 키워드 사용
//3. 멤버 함수(메서드) 를 정의할 수 있다.

//생성자: 객체를 생성할 떄 자동적으로 호출되는 함수 - 클래스의 이름을 그대로 따름, 객체생성시 처음에 넣어줄 것들을 포함함, 생성자는 두번 동작하지 않음
//소멸자: 객체가 소멸될 때 자동으로 호출되는 함수

//class Point {
//public:
//	int x, y;
//
//	//생성자들
//	Point(); //생성자는 리턴타입이 없다, 클래스의 이름과 같다.
//	Point(int _x, int _y); //생성자 오버로딩
//
//	//복사생성자
//	//자신과 동일한 타입의 객체에 대한 레퍼런스를 인자로 받는 생성자
//	//Point(Point& pt);
//	Point(const Point& pt); 
//	void Print();
//};
//
////1. 클래스 정의 안에는 메서드의 프로토 타입만 남겨둔다.
////2. 클래스 정의 밖에서는 범위 지정 연산자를 사용해서 함수를 정의
//Point::Point() {
//	x = 0;
//	y = 0;
//}
//Point::Point(int _x, int _y) {
//	x = _x;
//	y = _y;
//}
//Point::Point(const Point& pt) {
//	cout << "복사생성자" << endl;
//	x = pt.x;
//	y = pt.y;
//}
//
//void Point::Print() {
//	cout << x << ", " << y << endl;
//};
//int main() {
//	Point p1, p2, p4, p5(200,150);
//	p1.x = 10;
//	p2.x = 10;
//	p1.y = 20;
//	p2.y = 20;
//
//	Point p6(p1); //복사생성자만 1회 실행됨
//	p4.Print();
//	p5.Print();
//	
//	Point p3 = p2; //초기화, 값에 의한 복사
//	p3.Print(); //x,y값이 그대로 복사됨
//	p3 = p1; //대입, 값에 의한 복사
//	//초기화와 대입의 차이점
//	p3.Print();
//
//	p1.Print();
//	p2.Print();
//
//	return 0;
//
//}