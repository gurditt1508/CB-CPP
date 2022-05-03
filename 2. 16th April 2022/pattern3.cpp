#include<iostream>

using namespace std;

int main() {
       int n;
    cout << "enter number of rows: " ;
    cin >> n;

    int i = 1;

    while(i <= n){
        int j = 1;
        int no;
        if(i % 2 == 0){ //number to start row
            no = 0;
        }else{
            no = 1;
            }
        while( j <= i){
            cout << no << " ";
            no = 1 - no; //update rule
            j = j + 1;
            }
    cout << endl;
    i = i + 1;
    }
    return 0;
}