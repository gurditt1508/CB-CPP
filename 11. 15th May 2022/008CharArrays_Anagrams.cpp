#include<iostream>
#include<cstring>
using namespace std;

bool validAnagram(char* str1, char* str2){
	int f1[26] = {0};
	int f2[26] = {0};
	for(int i = 0; i<strlen(str1); i++){
		//extract ith char of str1
		char ch = str1[i];
		//map 'ch' to its index in f1
		int idx = ch - 'a';
		//update frequency of ch in f1
		f1[idx]++;
	}
	for(int i = 0; i<strlen(str2); i++){
		f2[str2[i] - 'a']++;
	}
	for(int i = 0; i<26; i++){
		if(f1[i] != f2[i]){
			return false;
		}
	}
	return true;
}

int main(){
	char str1[] = "ababccabc";
	char str2[] = "aaabbbccc";
	validAnagram(str1, str2) ? cout << "true." : cout << "false.";

	return 0;
}