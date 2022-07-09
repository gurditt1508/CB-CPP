#include<iostream>
#include<cstring>

using namespace std;

string movex(string str){
	//base case
	if(str == ""){ //or str.empty(), returns true or false
		return str; //empty string has x has the end
	}

	//recursive case

	//1. extract the substring that starts at the 1st idx.
	string subStr = str.substr(1);

	//2. ask your friend to move all x's to the end in that substring.
	string subsStrFromFriend = movex(subStr);

	//char ch = str[0]; // error, can't add character to string

	string ch = str.substr(0,1);

	if(ch == "x"){
		return subsStrFromFriend + ch;
	}else{
		return ch + subsStrFromFriend;
	}
}
	
int main(){
	string str = "axbxcx";
	int n = str.size();
	cout << movex(str) << endl; 
	
	return 0;
}