#include <iostream>
using namespace std;
//인라인
class Circle
{
    private:
        // mutable 사용시 const로 선언된 멤버함수안에서 필드의 값을 수정할 수 있다
        //mutable double radius;  
        double radius; //기본적으로 private
    public:
        Circle(){
            cout << this <<"객체 생성됨(기본 생성자)!\n"; // 실행시점의 객체가 가지고 있는 메모리 번지 주소
        }
        Circle(double r){ 
            radius = r;
            cout << this << "객체 생성됨(매개변수 생성자)!\n";
        } // 매개변수 생성자를 만들면 기본 생성자도 만들어야 한다.
        double getRadius() const{ //inline double getradius() const .... 형식으로 밖에 빼서 사용할 수 있다. 잛고 자주 사용될때에만 사용된다. 
                                    //100퍼센트 적용받는다는 보장이 없다. 컴파일러가 판단하여 인라인을 적용할 수 도 안할수도 있다.
            int a = 9;
            //radius = 5.0;  // const member function. const 키워드로 인해 수정 불가능 . 하지만 mutable이면 수정 가능
            return radius;
        }
        double getArea() const{
            const double PI = 3.14;
            return (PI * radius * radius);
        }

        double getPerimeter() const{
            const double PI = 3.14;
            return (2 * PI * radius);
        }
        void setRadius(double value){ //setter에는 const를 붙이지 않음.
            radius = value;
        }
};


int main()
{
    cout << "Circle 3" << endl;
    Circle circle3(5.0); //assign stack memory
    
    cout << "Circle 1" << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPerimeter() << endl;

    Circle* circle4 = new Circle(30.0); //assign heap memory
    cout << circle4->getArea() << endl; //circle4는 객체가 아니기 때문에 .getArea 같은 방법으로 사용 불가. -> 를 사용하여 출력.

    delete circle4; //new 키워드로 객체 생성하면 delete를 반드시 해줘야 한다. 그렇지 않으면 메모리 누수 발생.
    return 0;
} //main 함수가 끝나는 시점에 stack memory에 있는 영역이 소멸된다.