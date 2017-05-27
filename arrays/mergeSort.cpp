#include<iostream>
#include<vector>
using namespace std;

void printArray(int *A, int arr_size)
{
    cout<<endl<<"[ ";
    for(int i=0; i<arr_size; i++)
    {
        cout<<A[i];
        if (i!=arr_size-1)
            cout<<", ";
    }
    cout<< "]";
}

void merge(int *arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }

    while (i < n1)
    {
        arr[k++] = L[i++];
    }

    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}

void mergeSort(int *v, int l, int r)
{
    if(l<r)
    {
        int m = l + (r-l)/2;
        mergeSort(v, l, m);
        mergeSort(v, m+1, r);
        merge(v, l, m, r);
    }
}

int main()
{
    int v[] = {2,4,1,6,8,5,3,7,9};
    int arr_size=sizeof(v)/sizeof(v[0]);
    cout<<arr_size;
    cout<<"Unsorted array: ";
    printArray(v, arr_size);
    mergeSort(v, 0, arr_size);
    cout<<endl<<"Sorted array: ";
    printArray(v, arr_size);
}

