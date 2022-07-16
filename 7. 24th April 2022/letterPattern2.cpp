#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "enter the number of rows - ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= n - i + 1; j++, ch++){
            cout << ch << " ";
            //ch++;
        }
        ch--; //ch will be increased to F, but we need to set it to last character of 1st pattern (E)
        for(int j = 1; j <= n - i + 1; j++, ch--){
            cout << ch << " ";
        } 
        cout << endl;
    }
    return 0;
}