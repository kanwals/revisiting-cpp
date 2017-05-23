#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void increase(void * data, int size){
    if(size == sizeof(char)){
        char * p = (char*) data; ++(*p);
    } else if (size == sizeof(int)){
        int * p = (int*) data; ++(*p);
    }
}

int main(){
    int val1=10;
    char val2 = 'a';
    increase(&val1,sizeof(val1));
    increase(&val2,sizeof(val2));
    cout<<val1<<endl<<val2;
}


