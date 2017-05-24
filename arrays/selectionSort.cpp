#include<iostream>
#include<vector>

using namespace std;
vector<int> selectionSort(vector<int> v){
    int vectSize=v.size();
    for(int i=0; i<vectSize-1; ++i){
        int iMin = i;
        for (int j=iMin; j<vectSize; ++j){
            if(v[j]<v[iMin])
                iMin=j;
        }
        int temp = v[i];
        v[i]=v[iMin];
        v[iMin]=temp;
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
    vector<int> v {2,6,4,1,6,3,2,5,6,8,0};
    cout<<"Unsorted array: ";
    printVector(v);

    vector<int> result = selectionSort(v);
    cout<<endl<<endl<<"Sorted array: ";
    printVector(result);
}
