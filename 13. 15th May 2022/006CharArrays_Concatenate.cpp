#include<iostream>
#include<cstring>
using namespace std;

void concatenate(char* str1, char* str2){

	int i = strlen(str1);
	int j = 0;
	while(j <= strlen(str2)){ //null character will get added as well
							// we don't have to specially add it
		str1[i] = str2[j];
		j++;
		i++;
	}
	cout << str1 << endl;
}

int main(){
	char str1[100] = "hello";
	char str2[50] = "world";
	concatenate(str1, str2);
	cout << strcat(str1, str2);
	return 0;
}