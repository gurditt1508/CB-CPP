#include<iostream>
#include<cstring>

using namespace std;

void ReplacePi(char* inp, int i){
	// base case
	if(inp[i] == '\0'){
		return;
	}

	//recursive case

	if(inp[i] == 'p' and inp[i+1] == 'i'){
		int j = i+2;
		while(inp[j] != '\0'){
			j++; //index of null character
		}
		while(j >= i+2){
			inp[j+2] = inp[j];
			j--;
		}

		inp[i] = '3';
		inp[i+1] = '.';
		inp[i+2] = '1';
		inp[i+3] = '4';

		ReplacePi(inp, i+4);
	}else{
		ReplacePi(inp, i+1);
	}
}

int main(){
	char inp[201];  //assume input string can be 100 + null character
	//if all of them are pi, a string of 200 + 1 length is needed
	cout << "enter a string: ";
	cin >> inp;
	ReplacePi(inp, 0);
	cout << inp << endl;

	return 0;
}