#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "enter the number of rows - ";
    cin >> n;

    for(int i = n; i >= 1; i--){
        int no = 65;
        for(int j = 1; j <= i; j++){
            cout << char(no);
            no = no + 1;
        }
        cout << endl;
    }
    return 0;
}