#include<iostream>

using namespace std;

int main() {

    int n = 5;
    int i = 1;
    
    while(i <= n){  //n - i spaces
        int j = 1;
        while(j <= n - i){
            cout << " ";
            j = j + 1;
        }
        int k = 1; // i increasing numbers
        int no = i;
        while(k <= i){
            cout << no;
            k = k + 1;
            no = no + 1; 
        }
        no = 2 * i - 2;
        // or no = no - 2;
        int l = 1;
        while(l <= i - 1){
            cout << no;
            l = l + 1;
            no = no - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
