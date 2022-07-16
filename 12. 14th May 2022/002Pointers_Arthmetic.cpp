#include<iostream>
using namespace std;

int main(){
    int x = 512;
    int* xptr = &x;
    cout << xptr << endl;
    cout << xptr + 1 << endl;
    cout << xptr + 2 << endl;
    //int* xptr = NULL;
    //cout << *xptr << endl;
    return 0;
}