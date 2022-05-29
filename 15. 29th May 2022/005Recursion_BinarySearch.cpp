#include<iostream>

using namespace std;

int search(int* arr, int key, int s, int e){
	//base case (it is in terms of s and e)
	if(s > e){
		return -1;
	}
	//recursive case
	int m = s + (e-s)/2;

	if(arr[m] == key){
		return m;

	}else if(arr[m] < key){
		search(arr, key, s, m-1);

	}else{
		search(arr, key, m+1, e);
	}

}

int main(){

	int arr[] = {1,2,3,4,5};
	int n = (sizeof(arr) / sizeof(int));
	int key = 4;

	cout << search(arr, key, 0, n-1) << endl;

	return 0;
}