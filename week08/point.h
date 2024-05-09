#pragma once // 중복삽입을 방지

//#ifndef POINT_H //예전 코드의 방법
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
	Point(const Point& pt); //이미 생성된 객체를 매개변수로 받음. 전 객체를 초기화
	void setX(COOR_T value);
	void setY(COOR_T value);
	COOR_T getX() const { // 값에 대한 변경을 하지 않는다는 것을 의미함.
		return x;
	}
	COOR_T getY() const { //inline
		return y;
	}
private:
	COOR_T x,y;
};

// 함수가 짧고 자주 호출될 때 사용하면 실행속도 높일 수 있음.
inline void Point::setX(int value) { // inline으로 작성하면 함수호출 할 때 속도적 이점이 있다. 단, 삽입하는데 들어가는 오버헤드가 발생할 수 있음. 
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