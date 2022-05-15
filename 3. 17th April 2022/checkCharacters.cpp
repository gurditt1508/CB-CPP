#include<iostream>

using namespace std;

int main(){
    char ch;
    cout << "enter a character - ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z'){ //can also write 65 and 90 while keeping everything same
        cout << "character is upper case." << endl;

    }else if(ch >= 'a' and ch <= 'z'){
        cout << "character is lower case." << endl;
    }else if(ch >= '0' && ch <= '9'){
        cout << "character is a digit." << endl;
    }else{
        cout << "character is a special symbol." << endl;
    }
}
