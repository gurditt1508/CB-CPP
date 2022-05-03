#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= 2*n - 1; i++){ //pattern 1
        cout <<"*";
    }
    cout << endl;
    for(int i = 1; i < n; i++){ // pattern 2
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }
        for(int j = 1; j <= 2*i - 1; j++){
            cout << " ";
        }
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 2; i < n; i++){  // pattern 3
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
         for(int j = 1; j <= 2*(n - i) - 1; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
     for(int i = 1; i <= 2*n - 1; i++){ //pattern 4
        cout <<"*";
    }

    return 0;
}