#include <iostream>
#include <string>
#include <sstream>

#define newline '\n'
using namespace std;
const double pi = 3.14159;
int main(){

/*
    string str1 = "Hello \
World!";
    string str2 = R"(string with \backslash)";
    cout << str1 << endl;
    cout << "\x61\n";
    cout<<str2;
*/
    string radius;
    int r=0;
    cout<<"Please enter radius: ";
    //cin >> radius;
    getline(cin,radius);
    stringstream(radius) >> r;
    double area = 2*pi*r;
    cout<< newline<< "Area of circle: ";
    cout<< area<<newline;
    return 0;
}
