#include<iostream>
using namespace std;

void countPairs(int* A, int n, int target){
        int count = 0;
        for(int i = 0; i<n-1; i++){
            for(int j = i; j<n; j++){
                if(A[i] + A[j] == target){
                    count++;
                }
            }
        }
    cout << count;
}
int main(){
    int A[] = {3, 2, 1, 5, 4, 0};
    int n = sizeof(A) / sizeof(int);

    int target;
    cin >> target;
    countPairs(A, n, target);
    return 0;
}