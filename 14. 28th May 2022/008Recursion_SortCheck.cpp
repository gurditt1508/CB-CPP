#include<iostream>

using namespace std;

bool sortcheck(int* arr, int n, int i){

	//base case
	if(i == n-1){

		return true;
	}
	//recursive case
	//check if the arr[i...n-1] is sorted 
	return arr[i] < arr[i+1] and sortcheck(arr, n, i+1);

}

int main(){

	int A[] = {1,2,3,4,5};

	int n = sizeof(A) / sizeof(int);

	sortcheck(A, n, 0) ? cout << "sorted." : cout << "unsorted." << endl;

	return 0;
}