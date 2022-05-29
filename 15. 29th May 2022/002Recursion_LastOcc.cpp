#include<iostream>

using namespace std;

int rsearch(int* arr, int target, int i){

	if(i == -1){
		return -1;
	}

	if(arr[i] == target){
		return i;
	}

	return rsearch(arr, target, i-1);
}

int main(){
	int arr[] = {1,2,3,4,5,4};

	int n = sizeof(arr) / sizeof(int);

	int target = 4;

	cout << rsearch(arr,target, n-1) << endl;
	return 0;
}