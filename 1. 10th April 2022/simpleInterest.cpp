#include<iostream>

using namespace std;

int main() {

    int p; // to store the value of principle
    cout << "enter the value of principle: " << endl;
    cin >> p;

    int r; // to store the value of rate
    cout << "enter the value of rate: " << endl;
    cin >> r;

    int t; // to store the value of time
    cout << "enter the value of time: " << endl;
    cin >> t;

    // cout << "value of simple interest: " <<(p * r * t * 1.0)/100 << endl;
    // cout << "value of simple interest: " <<(p * r * t)/(100 * 1.0) << endl;
    // cout << "value of simple interest: " <<(p * r * t)/100.0 << endl;
    // cout << "value of simple interest: " <<(p * r * t)/float(100) << endl;
    cout << "value of simple interest: " <<(p * r * t)/(float)100 << endl;
    float si = (p*r*t)/100;
    cout << "simple interest: " << si << endl;
    return 0;
}