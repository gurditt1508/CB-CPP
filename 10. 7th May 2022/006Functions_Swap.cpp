#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    cout << "a: " << a << " " << "b: "<< b << endl;
    swap(a, b);
    cout << "a: " << a << " " << "b: "<< b << endl;
}
void swap(int& a, int& b){ //pass by reference
    int temp = b;
    b = a;
    a = temp;
}