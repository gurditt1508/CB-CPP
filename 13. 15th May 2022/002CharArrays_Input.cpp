#include<iostream>
#include<cstring>
using namespace std;
// void ReadString(char* ch, char delimiter = '$'){
// 	char ch;
// 	int i = 0;
// 	while(true){
// 		ch = cin.get();
// 		if(ch == '\n'){
// 			break;
// 		}
// 	}
// 	str[]
// }
int main(){
	char str[100];
	cout << "enter a string: ";
	// ReadString(str);
	cin.getline(str, 10, '%'); //percentage is delimiter (input will stop when it encounters delimiter)
	// cout << "You have entered: " << str;
	// cin >> str;
	cout << "you have entered: " << str;
	return 0;
}