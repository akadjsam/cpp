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
//����ü�� Ŭ������ ����
//1. class Ű���� ���
//2. public�� ���� ��������� ���õ� Ű���� ���
//3. ��� �Լ�(�޼���) �� ������ �� �ִ�.

//������: ��ü�� ������ �� �ڵ������� ȣ��Ǵ� �Լ� - Ŭ������ �̸��� �״�� ����, ��ü������ ó���� �־��� �͵��� ������, �����ڴ� �ι� �������� ����
//�Ҹ���: ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

//class Point {
//public:
//	int x, y;
//
//	//�����ڵ�
//	Point(); //�����ڴ� ����Ÿ���� ����, Ŭ������ �̸��� ����.
//	Point(int _x, int _y); //������ �����ε�
//
//	//���������
//	//�ڽŰ� ������ Ÿ���� ��ü�� ���� ���۷����� ���ڷ� �޴� ������
//	//Point(Point& pt);
//	Point(const Point& pt); 
//	void Print();
//};
//
////1. Ŭ���� ���� �ȿ��� �޼����� ������ Ÿ�Ը� ���ܵд�.
////2. Ŭ���� ���� �ۿ����� ���� ���� �����ڸ� ����ؼ� �Լ��� ����
//Point::Point() {
//	x = 0;
//	y = 0;
//}
//Point::Point(int _x, int _y) {
//	x = _x;
//	y = _y;
//}
//Point::Point(const Point& pt) {
//	cout << "���������" << endl;
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
//	Point p6(p1); //��������ڸ� 1ȸ �����
//	p4.Print();
//	p5.Print();
//	
//	Point p3 = p2; //�ʱ�ȭ, ���� ���� ����
//	p3.Print(); //x,y���� �״�� �����
//	p3 = p1; //����, ���� ���� ����
//	//�ʱ�ȭ�� ������ ������
//	p3.Print();
//
//	p1.Print();
//	p2.Print();
//
//	return 0;
//
//}