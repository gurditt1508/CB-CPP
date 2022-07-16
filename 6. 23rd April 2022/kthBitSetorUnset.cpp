#include<iostream>

using namespace std;

int main(){
    int n = 42;
    int k = 3;
    (n>>k)&1 ? cout << "set" : cout << "unset";
    cout << endl;
    (1<<k)&n ? cout << "set" : cout << "unset";
    return 0;
}