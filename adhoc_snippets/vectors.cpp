#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v (3,100);
    vector<int>::iterator it;

    char str[10]="hello";
    vector<char> u (str, str+ sizeof(str)/sizeof(char));
    vector<char>::iterator ut;


    for (it=v.begin(); it!=v.end(); ++it){
        cout<<*it<<endl;
    }
    for (ut=u.begin(); ut!=u.end(); ++ut){
        cout<<*ut<<endl;
    }
}
