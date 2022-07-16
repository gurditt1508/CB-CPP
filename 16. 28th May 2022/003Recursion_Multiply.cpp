#include<iostream>

using namespace std;

int multiply(int a, int b){

	if(b == 0){ //base case
		return 0;
	}

	return a + multiply(a, b-1); //recursive case

}

int main(){

	cout << multiply(6,9);

	return 0;
}