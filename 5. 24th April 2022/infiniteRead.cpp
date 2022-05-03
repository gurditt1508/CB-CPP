#include<iostream>
using namespace std;
int main(){
    int count = 0;
    char ch;
    while(true){
        ch = cin.get();
        if(ch == '$'){
            break;
        }
        count++;
    }
    cout << count;
    return 0;
}