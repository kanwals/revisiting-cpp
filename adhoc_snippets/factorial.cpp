#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int factorial_rec(int num){
    if (num == 1)
        return 1;
    else
        return num * factorial_rec(num-1);
}

int factorial_itr(int num){
    int fact = 1;
    for (int i=1; i<=num; num--){
        fact *= num;
    }
    return fact;
}
int main(){

    string input;
    int num;
    cout<< "Enter number: ";
    getline(cin,input);
    stringstream(input) >> num;
    cout<<endl<<"Recursive Factorial of " << num <<": "<< factorial_rec(num);
    cout<<endl<<"Iterative Factorial of " << num <<": "<< factorial_itr(num);

}
