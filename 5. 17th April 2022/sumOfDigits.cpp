#include<iostream>

using namespace std;

int main() {
    unsigned int n, q;
    cout << "enter the number: ";
    cin >> n;

    int s = 0;
    while(n > 0){
        int r = n % 10;
        s = s + r;
        n = n / 10;
    }
    cout << "sum of digits: " << s;
    return 0;
}