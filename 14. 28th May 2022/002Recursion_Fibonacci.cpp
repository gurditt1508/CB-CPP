#include<iostream>

using namespace std;

int fib(int n){

	if(n == 0){ //base case
		return n;

	}else if(n == 1){ // base case
		return n;
	}

	//recursive case
	return fib(n-1) + fib(n-2);

}

int main(){
	int n = 6;

	cout << fib(n) << endl;

	return 0;	
}