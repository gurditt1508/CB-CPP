#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout << "enter size of array - ";
    cin >> n;

    int A[100]; //max value
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int fl = INT_MIN;
    int sl = INT_MIN;
    int tl = INT_MIN;

    for(int i = 0; i < n; i++){
        if(A[i] > fl){
            tl = sl;
            sl = fl; 
            fl = A[i];
        }else if(A[i] > sl){
            tl = sl;
            sl = A[i];
        }else if(A[i] > tl){
            tl = A[i];
        }
    }
    cout << "1st largest - " << fl << endl;
    cout << "2nd largest - " << sl << endl;
    cout << "3rd largest - " << tl << endl;
    return 0;
}