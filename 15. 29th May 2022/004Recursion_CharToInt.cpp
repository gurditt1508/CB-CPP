#include<iostream>
#include<cstring>

using namespace std;
int convert(string str, int n){

	//base case
	if(n == 0){ //passing empty subarray
		return 0;
	}

	//recursive case
	string subStr = str.substr(0, n-1);
	int newint = convert(subStr, n-1);

	return newint*10 + (str[n-1] - '0');
}

int main(){

	string str = "123";
	int n = str.size();

	cout << convert(str, n) << endl;

	return 0;
}