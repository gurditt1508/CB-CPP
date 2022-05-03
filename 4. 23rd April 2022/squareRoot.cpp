//for perfect squares
#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "enter a number> ";
    cin >> n;
    float sqrt = 0;
    while(sqrt * sqrt <= n){
        sqrt = sqrt + 1;
    }
    sqrt = sqrt - 1;
    while(sqrt * sqrt <= n){
        sqrt = sqrt + 0.1;
    }
    sqrt = sqrt - 0.1;
    while(sqrt * sqrt <= n){
        sqrt = sqrt + 0.01;
    }
    sqrt = sqrt - 0.01;
    cout << sqrt;
    return 0;
}