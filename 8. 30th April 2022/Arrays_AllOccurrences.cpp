#include<iostream>
using namespace std;

int main(){
    int A[] = {10, 20 , 30 , 30 , 30};
    int n = sizeof(A) / sizeof(int);
    bool flag = false; //assume that target isn't present

    int target;
    cin >> target;
    
    int i;
    for(int i = 0; i < n; i++){
        if(A[i] == target){
            flag = true;
            cout << i << " ";
        }
    }
    if(!flag){ // flag == false
        cout << -1 << endl;
    }
    return 0;
}