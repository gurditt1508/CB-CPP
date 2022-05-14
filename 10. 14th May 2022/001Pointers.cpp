#include<iostream>
using namespace std;

int main(){
    int x = 12;
    int* xptr = &x;
    //cout << x << endl;
    // cout << &x << endl;
    // cout << xptr << endl;
    // cout << sizeof(xptr) << endl;

    // char ch = 'A';
    // char* chptr = &ch;
    
    // cout << ch << endl;
    // cout << &ch << endl;
    // cout << chptrcd cd dekstop << endl;
    // cout << sizeof(chptr) << endl;

    // int* ptr = (int*) &ch;
    // cout << ptr << endl;
    //cout << xptr << endl;
    //cout << *xptr << endl; //dereferencing the variable
    char* chptr = (char*) &x;
    //cout << (int)*chptr << endl;
    double* dptr = (double*) &x;
    cout << *dptr << endl;
    return 0;
}