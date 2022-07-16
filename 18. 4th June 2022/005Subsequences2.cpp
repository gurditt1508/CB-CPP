#include<iostream>
#include<set>

using namespace std;

void generateSubsequences(char* inp, char* out, int i, int j, set<string>& s){
	//base case
	if(inp[i] == '\0'){
		out[j] = '\0'; //terminating output string
		// cout << out << endl;
		s.insert(string(out));
		return;
	}
	//recursive case
	out[j] = inp[i]; //this will get overwritten in recursion 
	generateSubsequences(inp, out, i+1, j+1, s);

	generateSubsequences(inp, out, i+1, j, s);
}

int main(){
	char inp[10] = "abcd";
	char out[10];
	set<string> s;
	generateSubsequences(inp, out, 0, 0, s);

	for(string str : s){
		cout << str << endl;
	}

	return 0;
}