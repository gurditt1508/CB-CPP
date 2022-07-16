#include<iostream>
using namespace std;

int main(){
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A)/sizeof(int);

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            cout << A[i] << " " << A[j] << endl;
        }
    }
    return 0;
}