#include <iostream> //헤더파일 선언 input output stream
using namespace std; // std stands for standard namespace
//namespace 사용하지 않으면 std::cout 형태로 써야함

int main(){
	//std::cout << "Hello World!" << std::endl;
	// cout << "Hello World!" << endl;
	// cout << "Hello World!" << "\n";
	// cout << "Hello World!\n"; // cout stands for Character OUTput stream object
	string name;
	cin >> name; // cin stands for Character INput stream object
	cout << "Hello " << name <<"\n";

	return 0;
}