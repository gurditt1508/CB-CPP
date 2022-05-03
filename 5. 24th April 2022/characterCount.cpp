#include<iostream>
using namespace std;
int main(){
    int count = 0;
    char ch;
    int ws = 0; 
    int lc = 0; 
    int uc = 0;
    int sc = 0;
    int dig = 0;
    while(true){
        ch = cin.get();
        if(ch == '$'){
            break;
        }
        if(ch >= 'A' && ch <='Z'){
            uc++;
        }
        else if(ch >= 'a' && ch <= 'z'){
            lc++;
        }
        else if(ch >= '0' && ch <= '9'){
            dig++;
        }
        else if(ch == '\n' or ch == '\t' or ch == ' '){
            ws++;
        }else{
            sc++;
        }
    }
    cout << "whitespaces - " << ws << endl;
    cout << "lower case letters - " << lc << endl;
    cout << "upper case letters - " << uc << endl;
    cout << "special characters - " << sc << endl;
    cout << "digits - " << dig << endl;
    return 0;
}