#include<iostream>
using namespace std;

bool isPrime(int n){
    int i;
    for(i = 2; i*i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    if(i*i == n){
        return true;
    }
}
int main(){
    int n;
    cin >> n;
    isPrime(n) ? cout << "prime." : cout << "not prime.";
}