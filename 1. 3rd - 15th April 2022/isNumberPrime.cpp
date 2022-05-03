#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    int i = 2;
    while(i < n){
        if(n % i == 0){
            cout << "number is not prime" << endl;
            return 0;
        }
        i = i + 1;
    }
    cout << "number is prime.";
    return 0;
}
