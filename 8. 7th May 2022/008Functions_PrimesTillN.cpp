#include<iostream>
using namespace std;

bool isPrime(int); // declaration

void printprimes(int N){
    for(int n = 2; n <= N; n++){
        if(isPrime(n)){
            cout << n << " ";
    }
    }
}
bool isPrime(int n){ //definition
    int i;
    for(i = 2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    if(i == n){
        return true;
    }
}

int main(){
    int N;
    cin >> N;
    printprimes(N);
    return 0;
}