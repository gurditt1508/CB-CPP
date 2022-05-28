#include<iostream>
using namespace std;

int main(){
	string str;

	str = "hello";
	cout << str << endl;
	cout << str[0] << endl;

	string str2 = "world";
	cout << str2 << endl;

	string str3("coding blocks");
	cout << str3 << endl;

	string str4;
	str4 = str3;
	cout << str4 << endl;

	string str5(str2);
	cout << str5 << endl;

	string str6; //taking input //if we enter "hello world", str6 will only contain hello, cin will terminate 
								  // at space, then world will go in str7
	cout << "enter a string: " << endl;
	cin >> str6;
	cout << "you have entered " << str6 << endl;

	string str7; //taking input if we don't want to ignore whitespaces
	cout << "enter another string: " << endl;
	getline(cin, str7, '$');
	cout << "you entered > " << str7 << endl;
	return 0;
}