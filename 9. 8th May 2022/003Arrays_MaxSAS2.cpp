#include<iostream>
#include<climits>
using namespace std;

int main(){
    int A[10];
    int n;
    
    cout << "enter value of n: " ;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> A[i];
    }
    int csum[11];
    csum[0] = 0;
    for(int i = 1; i<=n; i++){
        csum[i] = csum[i-1] + A[i-1];
    }
    // for(int i = 0; i<=n; i++){
    //     cout << csum[i] << " ";
    // }
    //cout << "maximum sub-array sum is " << max << endl;
    int mss = INT_MIN; //maximum subarray sum
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            int sum = csum[j+1] - csum[i];
            if(sum > mss){
                mss = sum;
            }
        }
    }
    cout << "maximum sub array sum: " << mss;
    return 0;
}
