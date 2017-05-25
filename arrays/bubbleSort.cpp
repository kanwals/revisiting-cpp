#include<iostream>
#include<vector>

using namespace std;
vector<int> bubbleSort(vector<int> v){
    int vectSize = v.size();
    int temp;
    bool passRequired;
    for(int i=0; i<vectSize-1; ++i){
    passRequired = false;
        for (int j=0; j<vectSize-i-1; ++j){
            if(v[j]>v[j+1]){
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                passRequired = true;
            }
        }
        if(passRequired = false)
            break;
    }
    return v;
}

void printVector(const vector<int> &A){
    cout<<endl<<"[ ";
    for(int i=0; i<A.size(); i++){
        cout<<A[i];
        if (i!=A.size()-1)
            cout<<", ";
    }
    cout<< "]";
}

int main(){
    vector<int> v {2,-6,4,1,6,3,-2,5,6,8,0};
    cout<<"Unsorted array: ";
    printVector(v);
    vector<int> result = bubbleSort(v);
    cout<<endl<<endl<<"Sorted array: ";
    printVector(result);
}
