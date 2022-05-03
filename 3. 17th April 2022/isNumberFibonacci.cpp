#include<iostream>

using namespace std;

int main(){
        int n;
        cout << "enter the number - ";
        cin >> n;
        
    int a = 0;
    int b = 1;
    // int i = 2;
    // int f = 0;
    // while(f <= n){
    //     f = a + b;
    //     a = b;
    //     b = f;
    //     if(f == n){
    //         cout << "Yes." << endl;
    //         return 0;
    //     }
    // }
    // cout << "No." << endl;    
    while(true){
        int c = a + b;
        if( c == n){
            cout << "Yes."<< endl;
            return 0;
        }
        
        //if number is not equal, is it bigger than n?

        if(c > n){ 
            cout << "No."<< endl;
            return 0;
        }
        a = b;
        b = c;
    }
        return 0;
}