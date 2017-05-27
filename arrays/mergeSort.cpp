#include<iostream>
#include<vector>
using namespace std;

void printVector(const vector<int> &A){
    cout<<endl<<"[ ";
    for(int i=0; i<A.size(); i++){
        cout<<A[i];
        if (i!=A.size()-1)
            cout<<", ";
    }
    cout<< "]";
}

void merge(vector<int> L, vector<int> R, vector<int> &result){

    printVector(L);
    printVector(R);
    int l=L.size();
    int r=R.size();
    int i=0; int j=0; int k=0;
    while(i<l && j<r){
        if(L[i]<R[j]){
            result.push_back(L[i]); i++;
        } else if (L[i]>R[j]){
            result.push_back(R[j]); j++;
        }
    }
    if(i<l){
        while(i<l){
            result.push_back(L[i]); i++;
        }
    } else {
        while(j<r){
            result.push_back(R[j]); j++;
        }
    }
    printVector(result);
    cout<<endl<<"==============================="<<endl;
}

vector<int> mergeSort(vector<int> v){
    int vectSize = v.size();
    vector<int> dup;
    if(vectSize<2)
        return v;
    int mid = vectSize/2;
    vector<int> L {v.begin(), v.begin() + mid};
    vector<int> R {v.begin()+ mid, v.end()};
    mergeSort(L);
    mergeSort(R);
    merge(L,R,dup);
}


int main(){
    vector<int> v {2,4,1,6,8,5,3,7};
    cout<<"Unsorted array: ";
    printVector(v);
    vector<int> result = mergeSort(v);
    cout<<endl<<endl<<"Sorted array: ";
    printVector(result);
}

