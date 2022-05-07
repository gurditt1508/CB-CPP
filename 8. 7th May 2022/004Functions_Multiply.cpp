#include<iostream>
using namespace std;

int multiply(int n1, int n2){ //pass by value
    int m = n1*n2;
    return m; 
    // or return n1*n2;
}

int main(){
    int n1, n2;
    cin >> n1;
    cin >> n2;
    cout << multiply(n1, n2) << endl;

    return 0;
}