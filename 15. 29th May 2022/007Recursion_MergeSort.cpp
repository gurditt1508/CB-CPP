#include<iostream>

using namespace std;

void merge(int* arr, int s, int m, int e){
	int i = s;
	int j = m+1;

	int brr[100]; //assume max. size of brr can be 100 (will be given in question)
	int k = s;
	while(i <= m and j <= e){
		if(arr[i] < arr[j]){
			brr[k] = arr[i];
			i++;
			k++;
		}else{
			brr[k] = arr[j];
			j++;
			k++;
		}
	}
	while(i <= m){
		brr[k] = arr[i];
		i++;
		k++;
	}
	while(j <= e){
		brr[k] = arr[j];
		j++;
		k++;
	}

	//copy contents of brr into arr
	
	for(int l = s; l<=e; l++){
		arr[l] = brr[l];
	}
}

void mergeSort(int* arr, int s, int e){
	//base case
	if(s == e){
		return;
	}
	//1. divide the arr intwo two subarrays around the middle
	int m = s + (e-s)/2;

	//2. sort the subrrays arr[s....m] and arr[m+1....e]
	mergeSort(arr,s, m);
	mergeSort(arr, m+1, e);

	//3. merge the 2 sorted arrays and sort the resultant array
	merge(arr, s, m, e);
}

int main(){

	int arr[] = {6,5,4,3,2,1};
	int n = sizeof(arr) / sizeof(int);

	mergeSort(arr, 0, n-1);

	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}