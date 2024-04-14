#include <iostream>
#include <cstring>

using namespace std;
int myStrlen(const char* orig){
    int count = 0;
    for(int i = 0;orig[i]!=NULL;i++){
        count ++;
    }
    return count;
}
//[]()->void{};
char* reverseString(const char* orig){ //원본의 값을 수정하지 않기 위해 const 키워드 사용
    //사용자 정의함수 myStrlen 함수를 람다표현식으로 바꿈
    auto mysize = [](const char* orig)->int{
        int count = 0;
        for(int i = 0;orig[i]!=NULL;i++){
            count ++;
        }
        return count;
    };
    
    //이전에 나왔던 손코딩 문제
    //int size = strlen(orig); //C언어에서 나오는 표준함수를 사용하지 못한다면? 
    //int size = myStrlen(orig); //사용자 정의 함수를 만든다.
    int size = mysize(orig);
    char* reverse = new char[size + 1]; //null값 확보하기 위해 + 1
    for(int i = 0;i<size;i++){
        reverse[i] = orig[size - i - 1];
    }
    reverse[size] = NULL; //마지막에 널값을 넣지 않으면 쓰레기값이 출력될 가능성이 있다.
    reverse[size] = 0;
    reverse[size] = '\0';
    //reverse[strlen(orig)] = nullptr; 얘는 불가능
    return reverse;
}

int main(){
    char arr[] = "Inha University~";
    cout << arr << endl;

    char* parr = reverseString(arr); //&arr[0]을 넘겨줘도 상관없음
    cout << parr << endl;

    delete[] parr; // 꼭 delete로 동적메모리 해제해주어야 한다.
    parr = nullptr; // 포인터 변수에만 사용할 수 있음. 메모리 번지 주소를 지워준다.
    //parr = nullptr 에서 NULL과 nullptr은 다르다. NULL아스키 코드 자체의 값임 nullptr을 사용하면 parr이 포인터임을 한눈에 알 수 있다.
    return 0;
}
//사용자 정의 함수를 람다함수로 만들기도 가능해야 한다.
