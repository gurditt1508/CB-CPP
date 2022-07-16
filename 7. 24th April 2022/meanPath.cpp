#include<iostream>
using namespace std;
int main(){

    int x = 0;
    int y = 0;
    char ch;
    while(true){
        ch = cin.get();
        if(ch == 'E'){
            x++;
        }
        else if(ch == 'N'){
            y++;
        }
        else if(ch == 'W'){
            x--;
        }else if(ch == 'S'){
            y--;
        }else if(ch == '\n'){
            break;
        }
    }
    if(x >= 0 and y >= 0){   //1st quadrant
        for(int i = 1; i <= x; i++){
            cout << 'E';
            }
        for(int i = 1; i <= y; i++){
            cout << 'N';
        }
    }
    else if(x  < 0 and y >=0){ //2nd quadrant
        for(int i = 1; i <= -x; i++){
            cout << 'W';
        }
        for(int i = 1; i <= y; i++){
            cout << 'N';
        }
    }
    else if( x < 0 and y < 0){ //3rd quadrant
        for(int i = 1; i <= -x; i++){
            cout << 'W';
        }        
        for(int i = 1; i <= -y; i++){
            cout << 'S';
        }
    }
    else{ //4th quadrant
        for(int i = 1; i <= x; i++){
            cout << 'E';
        }
        for(int i = 1; i <= -y; i++){
            cout << 'S';
        }
    }
    cout << endl;
    cout << x << ", " << y;
    return 0;
}