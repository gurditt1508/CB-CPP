#include<iostream>

using namespace std;

string spelling[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void spell(int n){

	//base case
	if(n == 0){
		return; //you have already printed the number
	}

	//recursive case
	//ask friend to spell n/10
	spell(n/10);

	cout << spelling[n%10] << " ";

}

int main(){
	int n = 698;

	spell(n);

	return 0;
}