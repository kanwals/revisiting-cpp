/*
Given an integer array, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p
If such an integer is found return 1 else return -1.
*/
int Solution::solve(vector<int> &A) {
    int found = -1;
    for(int i=0; i<A.size(); i++){
        if(A[i]>=0){
            int num = A[i];
            int count = 0;
            for(int j=0; j<A.size(); j++){
                if(A[j]>num)
                    count++;
                if(count>num)
                    break;
            }
            if(count == num){
                found = 1;
                break;
            }
        }
    }
    return found;
}

//This is an inefficient solution. Look for better alternatives.
