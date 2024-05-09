////inline keyword (c++ 17)
//#include <iostream>
//#include "test.h"
//using namespace std;
//int main() {
//	Test aa;
//	cout << aa.a++ << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//inline void Test(){ //코드가 길지 않으면서 자주 참조하는 경우는 인라인 방식으로 쓰는게 유리함.
//	// 너무 길면 가져오는데 오버헤드가 발생함
//	cout << 1 << endl;
//	cout << 2 << endl;
//	cout << 3 << endl;
//}
//
//int main() {
//	Test();
//	return 0;
//}

////정적(static) 멤버 : 모든 객체가 공유하는 멤버
//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//	string name;
//	int sNo;
//
//	Student(const string& name_arg, int stdNumber);
//	~Student();
//
//public:
//	static int student_count; //정적멤버 변수
//	static void PrintStdCount(); //정적멤버 함수, 클래스명::함수명 객체 생성 없이 사용 가능하다.
//
//};
//int Student::student_count = 0;
//void Student::PrintStdCount() {
//	cout << student_count << endl;
//}
//Student::Student(const string& name_arg, int stdNumber) {
//	student_count++;
//	name = name_arg;
//	sNo = stdNumber;
//}
//Student::~Student() {
//	student_count--;
//}
//void Func() {
//	Student std1("김인하", 20191234); //객체 생성 +1
//	Student std2("박인하", 20171111); //객체 생성 +1
//
//	Student::PrintStdCount(); //3출력 이후 함수가 끝나면 std1, std2 객체 소멸
//}
//
//int main() {
//	Student::PrintStdCount();
//	Student std("최인하", 20202323); //객체생성 +1
//	Student::PrintStdCount();
//	Func();
//	Student::PrintStdCount();
//	return 0;
//}//main이 끝나는 시점에 std 객체 소멸

//접근제어
//#include <iostream>
//using namespace std;
//class AccessControl {
//public: //모든 외부에 대한 접근 허용
//	char publicData;
//	void publicFunc() {};
//protected:
//	int protectedData;
//	void protectedFunc() {};
//private: //멤버 변수들은 protected나 private로 하는게 좋음
//	float privateData;
//	void privateFunc() {};
//public: //내부적으로는 접근 가능하게 만듦
//	void AccessAllMembers();
//
//};
//void AccessControl::AccessAllMembers() {
//	publicData = 'A';
//	publicFunc();
//	protectedData = 100;
//	protectedFunc();
//	privateData = 4.5f;
//	privateFunc();
//}
//int main() {
//	AccessControl ac;
//
//	ac.AccessAllMembers();
//	//ac.publicData = 'A';
//	//ac.publicFunc();
//	//ac.protectedData = 100;
//	//ac.protectedFunc();
//	//ac.privateData = 4.5f;
//	//ac.privateFunc();
//
//	return 0;
//}