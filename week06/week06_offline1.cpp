// #include <iostream>
// #include <cstring>

// using namespace std;

// char* reverseString(const char* orig){ //원본의 값을 수정하지 않기 위해 const 키워드 사용
//     int size = strlen(orig);
//     char* reverse = new char[size + 1]; //null값 확보하기 위해 + 1
//     for(int i = 0;i<size;i++){
//         reverse[i] = orig[size - i - 1];
//     }
//     reverse[size] = NULL; //마지막에 널값을 넣지 않으면 쓰레기값이 출력될 가능성이 있다.
//     reverse[size] = 0;
//     reverse[size] = '\0';
//     //reverse[strlen(orig)] = nullptr; 얘는 불가능
//     return reverse;
// }

// int main(){
//     char arr[] = "Inha University";
//     cout << arr << endl;

//     char* parr = reverseString(arr); //&arr[0]을 넘겨줘도 상관없음
//     cout << parr << endl;

//     delete[] parr; // 꼭 delete로 동적메모리 해제해주어야 한다.
//     parr = nullptr; // 포인터 변수에만 사용할 수 있음. 메모리 번지 주소를 지워준다.

//     return 0;
// }
