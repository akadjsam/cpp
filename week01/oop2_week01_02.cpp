#include <iostream>
using namespace std;

int main() {
	int number;
	bool isPrime = true;

	cin >> number;

	if (number <= 1) {
		isPrime = false;
	}
	else {
		//for (int i = 2; i < number; i++) {
        for (int i = 2; i*i < number; i++) {  //제곱근으로 성능 개선  
			if (number % i == 0) {
				isPrime = false;
				break;  // for±¸¹® Å»Ãâ
			}
            cout << i << " ";
		}
	}

	if (isPrime)
		cout << number << " is prime number!\n";
	else
		cout << number << " is NOT prime number.\n";

	return 0;
}