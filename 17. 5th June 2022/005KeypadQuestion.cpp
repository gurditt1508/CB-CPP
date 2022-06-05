#include<iostream>

using namespace std;

string digitMap[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generateWords(char* inp, char* out, int i, int j){
	//base case
	if(inp[i] == '\0'){
		out[j] = '\0';
		cout << out << endl;
	}
	//recursion

	//1. extract ith digit from input
	int d = inp[i] - '0';

	if(d == 0 or d == 1){ //loop won't work in empty string
		generateWords(inp, out, i+1, j);
	}
	//2. extract options for ith digit
	string options = digitMap[d];
	for(char c_k : options){
		//3. map ith digit to c_k
		out[j] = c_k; //backtracking step because we are overwriting it in every iteration
		generateWords(inp, out, i+1, j+1);
	}
}

int main(){
	char inp[10] = {"23"};
	char out[10];
	generateWords(inp, out, 0, 0);

	return 0;
}