#include<iostream>

using namespace std;

int main() {
    int x, y, z;
    cout << "enter 1st number: " << endl;
    cin >> x;

    int max = x;

    cout << "enter 2nd number: " << endl;
    cin >> y;

    cout << "enter 3rd number: " << endl;
    cin >> z;

    if(y > max){
        max = y;
    }
    if(z > max){
        max = z;
    }

    cout << "greatest number is " << max;
    return 0;
}