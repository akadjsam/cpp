#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;
void myStrcpy(char* copyArr, const char* arr) {
	for (auto i = 0; arr[i] != NULL; i++) {
		copyArr[i] = arr[i];
	}
	copyArr[strlen(arr)] = NULL;
}
void myStrcat(char* catArr, const char* arr) {
	while (*catArr != NULL) {
		catArr++;
	}
	myStrcpy(catArr, arr);
}
int myStrcmp(const char* arr1, const char* arr2) {
	while (*arr1 != NULL && *arr2 != NULL) {
		if (*arr1 < *arr2) {
			return 1;
		}
		else if(*arr1 > *arr2){
			return -1;
		}
		arr1++;
		arr2++;
	}
	if (*arr1 == *arr2) {
		return 0;
	}
	else if (*arr1 == NULL) {
		return -1;
	}
	else
		return 1;
}

char* ReverseString(const char* arr) {

	auto len = [](const char* arr)->int {
		int count = 0;
		for (auto i = 0; arr[i] != NULL; i++)
			count++;
		return count;
		}(arr);
		char* rev = new char[len + 1];
		for (auto i = 0; i < len; i++) {
			rev[i] = arr[len - i - 1];
		}
		rev[len] = NULL;

		return rev;
}

int myFind(const char* arr1, const char* arr2) {
	int count = 0;
	int index = 0;
	int n = 0;
	while (*arr1 != NULL) {
		if (*arr1 == *arr2) {
			for (auto i = 0; i < strlen(arr2); i++) {
				if (arr1[i] == arr2[i]) {
					count++;
					if (count == strlen(arr2)) {
						return index;
					}
				}
				else
					break;
			}
		}
		index++;
		arr1++;
	}
	return 0;
}
char* mySubstr(const char* arr, int a, int b) {
	char* rev = new char[b - a+1];
	int i = 0;
	while(arr[a] != '\0') {
		rev[i] = arr[a];
		a++;
		i++;
		if (a == b)
			break;
	}
	rev[i] = NULL;

	return rev;
}

int main() {
	//string name = "hello";
	char name[] = "Hello";
	cout << myFind(name, "Hello") << endl;
	cout << mySubstr(name, 0, 10) << endl;
	char a[] = "Inha University";
	char aa[30] = "InhaUniversity";
	char* b = new char[strlen(a) + 1];
	char c[] = "hello";
	myStrcat(aa, c);
	cout << aa << endl;
	myStrcpy(b, a);
	char* copy = ReverseString(a);
	cout << copy << endl;
	cout << b << endl;
	char a1[] = "b bc";
	char b1[] = "bbc";
	cout << myStrcmp(a1, b1) << endl;
	delete[] copy;
	delete[] b;
	b = nullptr;
	copy = nullptr;
	return 0;
}

// 
// 
//#pragma warning(disable:4996)
//#include <iostream>
//#include <cstring> // for strcpy
//
//void myStrcat(char* catArr, const char* arr) {
//    // Move the pointer to the end of catArr
//    while (*catArr != '\0') {
//        catArr++;
//    }
//    // Copy the contents of arr to catArr from its current position
//    strcpy(catArr, arr);
//}
//
//int main() {
//    char catArr[50] = "Hello ";
//    const char arr[] = "world!";
//    myStrcat(catArr, arr);
//    std::cout << catArr << std::endl;
//    return 0;
//}