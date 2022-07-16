#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void reverseString(char* str){
	int i = 0;
	int j = strlen(str) - 1;
	while(i < j){
		swap(str[i], str[j]);
		i++;
		j--;
	}
}

int main(){
	char str[] = "hello";
	cout << "original string: " << str << endl;
	reverseString(str);
	cout << "1st reversed string: " << str << endl;
	strrev(str);
	cout << "2nd reversed string: " << str << endl;
	reverse(str + 1, str + 4);
	cout << str << endl;
	return 0;
}