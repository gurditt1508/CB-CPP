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
    int fs = INT_MAX;
    int ss = INT_MAX;

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

        if(A[i] < fs){
            ss = fs;
            fs = A[i];
        }else if(A[i] < ss){
            ss = A[i];
        }
    }
    int p1 = fl * sl * tl; //if array contains only positive numbers
    int p2 = fl * fs * ss;
    cout << "max product of triplet - " << max(p1, p2) << endl;
    return 0;
}