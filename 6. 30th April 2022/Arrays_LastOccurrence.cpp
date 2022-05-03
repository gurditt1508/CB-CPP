#include<iostream>
using namespace std;

int main(){
    int A[] = {10, 20 , 30 ,30, 30 , 30};
    int n = sizeof(A) / sizeof(int);
    int target, i;
    cout << "enter the target element ";
    cin >> target;

    for(i = n - 1; i >= 0; i--){
        if(A[i] == target){
            break;
        }
    }
    if(i == -1){
        cout << -1 << endl;
    }else{
        cout << i << endl;
    }
    return 0;
}