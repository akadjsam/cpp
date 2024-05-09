#include "point.h"
#include <iostream>
using namespace std;

//��ü �迭

int main() {
	//Point arr[4]; //�⺻ ������
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
	//���� �Ҵ�
	Point* p2 = new Point(); // �⺻������
	Point* p3 = new Point(50, 50); //�Ű����� ������
	Point* p4 = new Point(p1); //���� ������
	(*p2).Print();
	p3->Print();
	p4->Print();

	delete p2;
	delete p3;
	delete p4;
	p2 = p3 = p4 = nullptr;

	return 0;
}
