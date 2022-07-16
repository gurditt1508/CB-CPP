#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    for(int i = 0; i <= log2(n + 1); i++){
        if((n>>i)&1){
            count++;
        }
    }
    cout << n << " has " << count << " set bits."; 

    return 0;
}