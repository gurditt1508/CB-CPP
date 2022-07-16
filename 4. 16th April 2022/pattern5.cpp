#include<iostream>

using namespace std;

int main() {

    int n = 5;
    int i = 1;
    
    while(i <= n){
        int j = 1;
        while(j <= n - i){
            cout << " ";
            j = j + 1;
        }
        int k = 1;
        int no = i;
        while(k <= i){
            cout << no;
            k = k + 1;
            no = no + 1; 
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
