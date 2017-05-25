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
vector<int> copyValueRight(vector<int> &v, int index, int shiftBy = 1){
    v[index+shiftBy]=v[index];
    return v;
}

vector<int> insertionSort(vector<int> v){
    int vectSize = v.size();
    int val;
    int holeIndex;
    for(int i=1; i<vectSize; i++){
        val = v[i];
        holeIndex=i;
        for(int j=i-1; j>=0; j--){
            if(v[j]>val){
                copyValueRight(v,j);
                holeIndex=j;
            }
        }
        v[holeIndex]=val;
    }
    return v;
}


int main(){
    vector<int> v {2,-6,4,1,6,3,-2,5,6,8,0};
    cout<<"Unsorted array: ";
    printVector(v);
    vector<int> result = insertionSort(v);
    cout<<endl<<endl<<"Sorted array: ";
    printVector(result);
}

