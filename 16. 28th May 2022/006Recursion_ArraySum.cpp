#include<iostream>

using namespace std;

int f(int* arr, int n, int i){
	if(i == n-1){ //base case
		return arr[n-1];
	}

	int A = f(arr, n, i+1);

	return arr[i] + A;
}


int main(){

	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr) / sizeof(int);

	int sum = f(arr, n, 0);
	cout << sum << endl;
}