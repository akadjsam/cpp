//#include "point.h"
//#include <iostream>
//using namespace std;
//
//typedef void (*FP1)(int); //�Լ� ������
//typedef void (Point::*FP2)(int); // Ŭ������ ����Լ� ������ �Լ� ������
//
//void Area(const Point& pt) { //���⼭ �б� �������� �ް� ���� (pt�� ���۷��� ��ü), const�� �ƴ� ��� �޼��带 ȣ���ϴ� ���� �ȵ�
//	//vs�� �޼��� �߿� ��� ������ ���� �����Ѵٰ� �����ϴ� �͵��� �����Ѵ�.
//	int area = pt.getX() * pt.getY(); // getY()�� const Ű���尡 ������ ���������� getY()�� ȣ���� �� ����. 
//	cout << "0,0�� �� ���� �̷�� �簢���� ���� = " << area << endl;
//}
//
//
//int main() {
//	Point pt(100, 100);
//	//Area(pt);
//	//pt.setX(-50);
//	// 
//	//FP1 fp1 = &Point::setY;
//	FP2 fp2 = &Point::setY; // Point Ŭ������ setY ����Լ��� �ּҸ� ����.
//	(pt.*fp2)(50); //�տ� ()�� ����� ������ �켱������ ���ؼ� ����� ����� �� ����
//
//	pt.Print();
//	return 0;
//}
//
////typedef unsigned int* ui_ptr;
////unsigned int a = 100000;/unsigned int* pui = &a;
////ui_ptr pui = &a; //�ٿ��� ����� �� �ִ�. �ڷ�Ÿ���� ������ ����� ��. �Լ������Ϳ��� ���� ������.
////cout << *pui << endl;