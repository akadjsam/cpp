#include "point.h"
#include <iostream>
using namespace std;

//객체 배열

int main() {
	//Point arr[4]; //기본 생성자
	Point arr[4] = {
		Point(10,20),
		Point(11,27),
		Point(99,88),
		Point(1000,-99)
	};

	for (auto i = 0; i < 4; i++) {
		arr[i].Print(); 
	}

	Point p1(5, 10);
	//동적 할당
	Point* p2 = new Point(); // 기본생성자
	Point* p3 = new Point(50, 50); //매개변수 생성자
	Point* p4 = new Point(p1); //복사 생성자
	(*p2).Print();
	p3->Print();
	p4->Print();

	delete p2;
	delete p3;
	delete p4;
	p2 = p3 = p4 = nullptr;

	return 0;
}
