#include <iostream>
using namespace std;
int main(){
    int a=0;
    //decltype(foo)=bar for just declaration. auto for declaration as well as initialization
    auto b=a;
    float d(2.1);
    cout<< (d-b);
    return 0;
}
