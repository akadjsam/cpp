#include <iostream>
using namespace std;
void myStrcpy(char*,const char*);
int myStrlen(const char*);

void myStrcpy(char* str1, const char* str2){
    for(auto i=0;i<myStrlen(str2);i++){
        str1[i] = str2[i];
    }
    str1[myStrlen(str2)] = NULL;
}
void myStrcat(char* str1, const char* str2){
    int n = 0;
    while(str1[n] != NULL){
        n++;
    }
    for(auto i=0;i<myStrlen(str2);i++){
        str1[n] = str2[i];
        n++;
    }
    str1[n] = NULL;
}
int myStrcmp(const char* str1, const char* str2){
    int i = 0;
    while(str1[i]!=NULL && str2[i]!=NULL){
        if(str1[i] > str2[i]){
            return -1;
        }
        else if(str1[i] < str2[i]){
            return 1;
        }
        else
            return 0;
    }
    if(str1[i] == str2[i])
        return 0;
    else if(str1[i] == NULL){
        return -1;
    }
    else
        return 1;
}
int myStrlen(const char* str){
    int count = 0;
    for(auto i=0;str[i]!=NULL;i++){
        count ++;
    }
    return count;
}
char* myStrReverse(const char* str){
    int len = myStrlen(str);
    char* rev = new char[len+1];
    for(auto i=0;i<len;i++){
        rev[i] = str[len-i-1];
    }
    rev[len] = NULL;
    return rev;
}
int myFind(const char* str1, const char* str2){
    int count = 0;
    int index = 0;
    while(str1[index] != NULL){
        if(str1[index] == str2[0]){
            for(auto i=0;i<myStrlen(str2);i++){
                if(str1[index+i] == str2[i]){
                    count ++;
                    if(count == myStrlen(str2)){
                        return index;
                    }  
                }    
            }  
            count = 0;
        }
        index ++;
    }
    return -1;
}

char* mySubstr(const char* str, int a, int b){
    char* rev = new char[b - a + 1];
    for(auto i=0;i<(b-a);i++){
        rev[i] = str[a+i];
    }
    rev[b-a] = NULL;
    return rev;
}

int main(){
    char a[] = "Inha University";
    char* b = new char[myStrlen(a) + 1];
    myStrcpy(b,a);
    cout << b << endl;
    cout << myStrcmp(a,b) << endl;

    char* c = new char[myStrlen(a) + 1];
    c = myStrReverse(a);
    cout << c << endl;

    char d[] = "inha";
    char e[] = "univ";
    myStrcat(d,e);
    cout << d << endl;

    char f[] = "inhauniv";
    char g[] = "nhaa";
    cout << myFind(f,g) << endl;

    cout << mySubstr(f,1,4) << endl;

    delete[] b;
    delete[] c;
    return 0;
}