#include<iostream>

using namespace std;

int main() {
       int n;
    cout << "enter number of rows: " ;
    cin >> n;
    int i = 1;
    int no = 1; //we haven't written this in loop as we don't want the program to reset it
    while(i <= n){
        int j = 0;
        while( j < i){
            cout << no << " "; 
            j = j + 1;
            no = no + 1;
            }
    cout << endl;
    i = i + 1;
    }
    return 0;
}