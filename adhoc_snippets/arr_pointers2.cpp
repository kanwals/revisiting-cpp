#include<iostream>
#include<string>
#include<sstream>
#include <typeinfo>
using namespace std;

int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    cout<<arr<<endl;
    cout<<(*(arr[0] + 1)+2)<<endl;
    cout << *arr << ": "<<typeid(*arr).name() << endl;
}
