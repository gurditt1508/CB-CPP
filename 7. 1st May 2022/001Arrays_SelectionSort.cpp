#include<iostream>
using namespace std;

int main(){
    int A[] = {50, 40, 30, 20 ,10};
    int n = sizeof(A) / sizeof(int);

    for(int i = 0; i < n - 1; i++){
        int min_idx = i;
        //in the ith passs, we place the smallest element in unsorted part of array to its correct index which
        // is ith index
        for(int j = i + 1; j < n; j++){
            if(A[j] < A[min_idx]){
                min_idx = j;
            }
        }
        swap(A[i], A[min_idx]);
    }
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    return 0;
}