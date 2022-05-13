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
    // int X[10];

    // X[0] = A[0]; //only one array ending at 0th index
    //             // i.e. the element itself
    // int mss = A[0]; // to find maximum value in the array
    //                 // X
    // for(int i = 1; i<n; i++){
    //     X[i] = max(X[i-1] + A[i], A[i]);
    //     if(X[i] > mss){
    //         mss = X[i];
    //     }
    // }
    // for(int i = 0; i<n; i++){
    //     cout << X[i] << " ";
    // }
    int X = A[0];

    int mss = X; //only one array ending at 0th index
                // i.e. the element itself
    for(int i = 1; i<n; i++){
        X = max(X + A[i], A[i]);  //KADANE'S ALGORITHM
        if(X > mss){
            mss = X;
        }
    }
    cout << mss << endl;
    return 0;
}
