#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char* str){
	int i = 0;
	int j = strlen(str) - 1;
	while(i<j){
		if(str[i] == str[j]){
			i++;
			j--;
		}else{
			return false;
		}
	}
	return true;
}

int main(){
	char str[] = "hello";
	isPalindrome(str) ? cout << "Yes." : cout << "No.";
	return 0;
}