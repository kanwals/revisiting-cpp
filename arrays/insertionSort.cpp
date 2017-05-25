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
    cout<<endl<<"After right shifting: ";
    printVector(v);
    return v;
}

vector<int> insertionSort(vector<int> v){
    int vectSize = v.size();
    int sortedUptoIndex = 0;
    int temp;
    for(int i=1; i<vectSize-1; i++){
        if(v[i]<v[sortedUptoIndex]){
            for(int j=sortedUptoIndex; j>=0; j--){
                if(v[j]>v[i]){
                    temp = v[i];
                    copyValueRight(v,j);
                }
                v[j]=temp;
                printVector(v);
            }
            sortedUptoIndex++;
        }
        sortedUptoIndex++;
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

