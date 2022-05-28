#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	string str = "hello world";
	//cout << str.length() << endl; 
	//cout << str.size() << endl;

	string str1 = "abc";
	string str2 = "ab";
	//str1.append(str2);
	//cout << str1 << endl;

	str1 = str1 + str2;
	//cout << str1 << endl;

	//cout << str1.compare(str2) << endl;

	// string str3 = "abc";
	// string str4 = "abc";
	// if(str3 == str4){
	// 	cout << "they are equal " << endl;
	// }else if(str3 > str4){
	// 	cout << str3 << endl;
	// }else if(str4 > str3){
	// 	cout << str4 << endl;
	// }

	string str5 = "hehellolloworld";
	// cout << str5.find("he") << endl;
	// cout << str5.rfind("llo") << endl;
	// cout << str5.find("coding") << endl;

	//cout << string::npos << endl;
	
	// string str6 = "helloworld";
	// cout << str6.substr(2,4) << endl;
	// cout << str6.substr(2, 100) << endl;

	string str7 = "new delhi";

	char* ch_arr = (char*)str7.c_str(); //default type is void*, so we need to typecast it
	//cout << ch_arr << endl;
	//cout << ch_arr + 5 << endl;

	string str8 = "coding blocks";
	//reverse(str8.begin(), str8.end());
	reverse(str8.begin(), str8.begin() + 6); //will only reverse "coding"
	cout << str8 << endl;

	return 0;
}