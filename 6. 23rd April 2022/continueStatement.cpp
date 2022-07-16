#include<iostream>

using namespace std;

int main(){
    int n = 10;
    for(int i = 1; i <= n; i++){
        if(i == 2){
            continue;
        }
        cout << i << " ";
    }
    return 0;
}