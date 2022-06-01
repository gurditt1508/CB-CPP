#include<iostream>

using namespace std;

int rainwater(int* A, int n){
	int left[100];
	left[0] = A[0];

	int right[100];
	right[n-1] = A[n-1];

	for(int i = 1; i<n; i++){
		left[i] = max(A[i], left[i-1]);
	}
	for(int i = n-2; i>=0; i--){
		right[i] = max(A[i], right[i+1]);
	}
	int count = 0;
	for(int i = 0; i<n; i++){
		count += (min(left[i], right[i]) - A[i]);
	}

	return count;
}

int main(){
	int A[] = {0,1,0,2,1,0,1,3,2,1,2};
	int n = sizeof(A) / sizeof(int);

	cout << rainwater(A, n) << endl;

	return 0;
}