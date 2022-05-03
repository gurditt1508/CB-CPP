#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "enter a number: ";
    cin >> n;
    int i;
    bool flag = true; // assume given number is prime 
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            flag = false;             
            break;
        }
    }
    // for(i = 2; i < n; i++){
    //     if(n % 2 ==0){
    //         break;
    //     }
    // }
    // if(flag){
    //     cout << "prime." << endl;
    // }else{
    //     cout << "not prime." << endl;
    // }
    flag ? cout << "Prime." : cout << "Not prime."; // ternary operator
    return 0;
}