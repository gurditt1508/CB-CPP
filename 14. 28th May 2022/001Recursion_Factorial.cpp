#include<iostream>
using namespace std;

int factorial(int n){

	if(n == 0){ //base case
		return 1;
	}

	//ask friend for value of (n-1)!
	return n * factorial(n-1); //recursive case
}

int main(){
	int n = 4;

	cout << factorial(n) << endl;

	return 0;
}