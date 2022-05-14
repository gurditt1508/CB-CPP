#include<iostream>
using namespace std;

int main(){
    int A[] = {10, 20, 30, 40, 50};
    cout << A[0] << " " << *A << endl;
    cout << A[0] << " " << *(A+2) << endl;
    cout << A[0] << " " << *(A+2) << endl;
    cout << A[0] << " " << *(A+3) << endl;
    cout << A[0] << " " << *(A+4) << endl;

    cout << &A[0] << " " << A << endl;
    cout << &A[2] << " " << A+2 << endl;

    return 0;
}