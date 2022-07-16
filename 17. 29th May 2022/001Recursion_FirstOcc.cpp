#include<iostream>

using namespace std;

int search(int* arr, int n, int target, int i){
	if(i == n){
		return -1;
	}
	// if(i == n-1){
	// 	if(arr[i] == target){
	// 		return i;
	// 	}else{
	// 		return -1;
	// 	}
	// }
	if(arr[i] == target){
		return i;
	}


	return search(arr, n, target, i+1);
}

int main(){
	int arr[] = {1,0,3,2,4};
	int n = sizeof(arr) / sizeof(int);

	int target = 5;

	cout << search(arr, n, target, 0) << endl;
}