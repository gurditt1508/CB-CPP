#include<iostream>
using namespace std;

void f(int& y){ //reference variable (pass by reference)
    y++;
}
int main(){
    int x = 10;
    cout << x << endl;
    f(x);
    // int& y = x;
    // y++;
    cout << x << endl;
    return 0;
}