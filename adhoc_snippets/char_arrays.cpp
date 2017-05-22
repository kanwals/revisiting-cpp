#include<iostream>
#include<string>
#include<sstream>
#include<array>
using namespace std;

int main(){
    char myntcs[] = "some text";
    string mystring = myntcs;
    cout << mystring;
    cout << endl << mystring.c_str();
}
