#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int var1, var2;
    int * ptr1;
    ptr1 = &var1;
    *ptr1 = 10;
    ptr1 = &var2;
    *ptr1 = 20;
    cout<< var1<<"   "<<var2;
}
