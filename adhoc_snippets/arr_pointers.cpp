#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int numbers[5];
    int *p;
    p = numbers;
    *p = 10;
    *(p+1) = 20;
    p = &numbers[2]; *p = 30;
    p = &numbers[2]+1; *p = 40;
    *++p = 50;

    for (int i=0; i<5; i++){
        cout<<numbers[i]<<endl;
    }
}
