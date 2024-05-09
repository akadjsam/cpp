#include "point.h"
#include <iostream>
using namespace std;

Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(COOR_T _x, COOR_T _y) {
	x = _x;
	y = _y;
}
Point::Point(const Point& pt) : x(pt.x), y(pt.y){
	//x = pt.x;
	//y = pt.y;
}

void Point::Print() const {
	cout << x << ", " << y << endl;
}
