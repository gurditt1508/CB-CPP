#include<iostream>

using namespace std;

void generateSubsequences(char* inp, char* out, int i, int j){
	//base case
	if(inp[i] == '\0'){
		out[j] = '\0'; //terminating output string
		cout << out << endl;
		return;
	}
	//recursive case
	out[j] = inp[i]; //this will get overwritten in recursion 
	generateSubsequences(inp, out, i+1, j+1);

	generateSubsequences(inp, out, i+1, j);
}

int main(){
	char inp[10] = "abc";
	char out[10];

	generateSubsequences(inp, out, 0, 0);

	return 0;
}