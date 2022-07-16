#include<iostream>
using namespace std;

void isEven(int n){
    if (n%2 == 0){
        cout << "even" << endl;
    }else{
        cout << "odd" << endl;
    }
    return;
}

int main(){
    int n;
    cin >> n;
    isEven(n);
}