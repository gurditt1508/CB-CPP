#include<iostream>
using namespace std;

int main(){
    int A[] = {10, 20 , 30, 40};
    int n = sizeof(A) / sizeof(int);
    for(int i = 0; i<n; i++){
        //iterate over all the possible starting indices
        for(int j = i; j<n; j++){
            //for each starting index, iterate over all
            // the possible ending indices
            for(int k = i; k<=j; k++){
            //to generate sub array, iterate over the array
            // from the ith idx till jth idx
                cout << A[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}