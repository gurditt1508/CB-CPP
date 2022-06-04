#include<iostream>
#include<cstring>

using namespace std;

void generatePermutations(char* inp, int i){
	//base case
	if(inp[i] == '\0'){
		cout << inp << endl;
		return;
	}
	//recursive case
	for(int j = i; j<strlen(inp); j++){
		swap(inp[i], inp[j]);

		generatePermutations(inp, i+1);
		swap(inp[i], inp[j]); //backtrack step
	}
}

int main(){

	char inp[10] = "abc" ;

	generatePermutations(inp, 0);

	return 0;
}