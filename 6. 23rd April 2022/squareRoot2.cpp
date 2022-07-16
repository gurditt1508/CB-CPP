#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "enter a number: ";
    cin >> n;

    int p;
    cout << "enter number of decimal places: ";
    cin >> p;

    float sqrt = 0;
    float inc = 1;

    for(int i = 0; i <= p; p++){
        while(sqrt * sqrt <= n){
            sqrt = sqrt + inc;
            inc = inc / 10;
        }
    }
    cout << sqrt;
    return 0;
}