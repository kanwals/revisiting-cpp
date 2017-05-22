#include<iostream>
#include<string>
using namespace std;
inline void duplicate (const int &a, const int &b, const int &c){
    cout << "duplicate called";
}

int main(){
    int a = 2;
    int b = 6;
    int c = 9;
    duplicate(a,b,c);
    cout<< a << " " << b << " " << c;
}
