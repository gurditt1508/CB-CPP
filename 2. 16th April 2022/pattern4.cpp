#include<iostream>

using namespace std;

int main() {

    int n;
    cout << "enter number of rows: ";
    cin >> n;
    int i = 1;
    
    while(i <= n){
        int j =1;
        while(j <= n - i){
            cout << " ";
            j = j + 1;
        }
        int k = 1;
        while(k <= i - 1){
            cout << "*";
            k = k + 1; 
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
