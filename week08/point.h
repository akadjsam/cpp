#pragma once // �ߺ������� ����

//#ifndef POINT_H //���� �ڵ��� ���
//#define POINT_H
//
//#endif // !POINT_H

class Point {
public:
	typedef int COOR_T;

	void Print() const;
	Point();
	//Point(int _x, int _y);
	Point(COOR_T _x, COOR_T _y);
	Point(const Point& pt); //�̹� ������ ��ü�� �Ű������� ����. �� ��ü�� �ʱ�ȭ
	void setX(COOR_T value);
	void setY(COOR_T value);
	COOR_T getX() const { // ���� ���� ������ ���� �ʴ´ٴ� ���� �ǹ���.
		return x;
	}
	COOR_T getY() const { //inline
		return y;
	}
private:
	COOR_T x,y;
};

// �Լ��� ª�� ���� ȣ��� �� ����ϸ� ����ӵ� ���� �� ����.
inline void Point::setX(int value) { // inline���� �ۼ��ϸ� �Լ�ȣ�� �� �� �ӵ��� ������ �ִ�. ��, �����ϴµ� ���� ������尡 �߻��� �� ����. 
	if (value < 0)
		x = 0;
	else if (value > 100)
		x = 100;
	else
		x = value;
}

inline void Point::setY(int value) {
	if (value < 0)
		y = 0;
	else if (value > 100)
		y = 100;
	else
		y = value;
}