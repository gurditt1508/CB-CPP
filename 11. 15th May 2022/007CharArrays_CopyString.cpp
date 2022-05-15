#include<iostream>
#include<cstring>
using namespace std;

void copyString(char* str1, char* str2){
	int i = 0;
	int j = 0;

	while(j < strlen(str2)){
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0'; //adding null character by ourselves
	cout << str1 << endl;
}

int main(){
	char str1[] = "hello";
	char str2[] = "world";
	//copyString(str1, str2);
	strcpy(str1, str2);
	cout << str1 << endl;
	return 0;
}