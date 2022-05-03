#include<iostream>

using namespace std;

int main(){
    int n, c;
    cout << "Which Fibonacci number do you want? ";
    cin >> n;
    if( n == 0 || n == 1){
        cout << n <<"th fibonacci number is " << n;
        return 0;
    }

    int a = 0;
    int b = 1;
    int i = 2;
    int f = 0;
    // cout << a << endl;
    // cout << b << endl;
    while(i <= n){
        f = a + b;
        a = b;
        b = f;
        i = i + 1;
    }
    cout << n <<"th Fibonacci number is " << f;
    return 0;
}