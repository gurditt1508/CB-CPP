#include<iostream>
using namespace std;

// bool isEven(int n){
//     if(n%2 == 0){
//         return true;
//     }else{
//         return false;
//     }
// }
bool isEven(int n){
    return n%2 == 0;
}

int main(){
    int n;
    cin >> n;
    cout << isEven(n) << endl;
    isEven(3) ? cout << "true" << endl : cout << "false";

}