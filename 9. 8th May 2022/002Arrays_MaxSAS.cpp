#include<iostream>
#include<climits>
using namespace std;

int main(){
    int max = INT_MIN;
    int A[] = {10, -3, 12, 7, -20};
    int n = sizeof(A) / sizeof(int);
    
    for(int i = 0; i<n; i++){
        //iterate over all the possible starting indices
        for(int j = i; j<n; j++){
            int count = 0;
            for(int k = i; k<=j; k++){
                count += A[k];
            }            
            if(count > max){
                max = count;
            }
        }
    }
    cout << "maximum sub-array sum is " << max << endl;
    return 0;
}