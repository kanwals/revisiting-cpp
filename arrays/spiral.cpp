#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int> > &A) {
	vector<int> result;
	// DO STUFF HERE AND POPULATE result
	int T=0;
	int R=A[0].size()-1;
	int B=A.size()-1;
	int L=0;
	short dir = 0;

	while(T<=B && L<=R){
        if(dir == 0){
            for(int i=L; i<=R; i++){
                cout<<A[T][i]<<" ";
                result.push_back(A[T][i]);
            }
            T++; dir = 1;
        }else if (dir == 1){
            for(int i=T; i<=B; i++){
                cout<<A[i][R]<<" ";
                result.push_back(A[i][R]);
            }
            R--; dir = 2;
        }else if (dir == 2){
            for(int i=R; i>=L; i--){
                cout<<A[B][i]<<" ";
                result.push_back(A[B][i]);
            }
            B--; dir = 3;
        }else if (dir == 3){
            for(int i=B; i>=T; i--){
                cout<<A[i][L]<<" ";
                result.push_back(A[i][L]);
            }
            L++; dir = 0;
        }
	}
	return result;
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
    vector<vector<int>> v {{ 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 }};
    vector<int> result = spiralOrder(v);
    printVector(result);
}
