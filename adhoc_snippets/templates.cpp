#include<iostream>
#include<string>
#include<sstream>
using namespace std;

template <class T>
T sum(T a, T b){
    return a+b;
}

template <typename U, typename V>
bool are_equal(U a, V b){
    return (a == b);
}

template <typename A, int B>
A fixed_multiply(A a){
    return a * B;
}

int main(){
    string input;
    double num1, num2;
    cout<< "Enter number 1: ";
    getline(cin,input);
    stringstream(input) >> num1;
    cout<< "Enter number 2: ";
    getline(cin,input);
    stringstream(input) >> num2;

    cout<<endl<<"Sum of two numbers is: "<<sum(num1, num2);
    cout<<endl<<"Are two numbers equal? "<<are_equal(num1, num2);
    cout<<endl<<"10 multiplied by 3: "<<fixed_multiply<double,3>(10.9);
}
