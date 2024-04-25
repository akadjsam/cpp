#include <iostream>
using namespace std;

class Circle{
    private:
        double radius;
    public:
        Circle();
        Circle(double rad);
        Circle(const Circle &c);
        ~Circle();
        
        double getRadius() const;
        void setRadius(double value);
        double getArea();

};

Circle::Circle():radius( 1.0 ){

}
Circle::Circle(double rad):radius(rad){

}
Circle::Circle(const Circle &c):radius(c.radius){

}
Circle::~Circle(){

}
double Circle::getRadius() const{
    return radius;
}
void Circle::setRadius(double value){
    radius = value;
}
double Circle::getArea(){
    return radius * radius;
}
int main(){
    Circle* c = new Circle(2.0);
    Circle a(2.0);
    cout << c->getArea() << endl;
    if(a.getRadius()== c->getRadius())
        cout << "1" << endl;
    return 0;
}