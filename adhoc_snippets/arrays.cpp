#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void print_array(int arg[][7], int rows, int cols){
    for (int i=0; i<rows; ++i){
        for(int j=0; j<cols; ++j){
            cout<<arg[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<endl;
}

int main(){
    int arr[2][7] = {{1,2,3,4,5,6,7},{11,22,33,44,55,66,77}};
    print_array(arr,2,7);
}
