#include<iostream>

using namespace std;

int* resize(int* A, int size){
	cout << "resizing the array from " << size << " to " << 2*size << endl;
	int* B = new int[2*size];
	for(int i = 0; i<size; i++){
		B[i] = A[i];
	}
	delete[] A;
	return B;

}

int main(){

	int* A = new int[1];
	int i = 0;
	int size = 1;

	int x;
	cin >> x;

while(x != -1){
	A[i] = x;
	i++;
	if(i == size){
		//you've exhausted array capacity, resize
		A = resize(A, size);
		size *= 2;
	}
	cin >> x;
}
	for(int j = 0; j<i; j++){
		cout << A[j] << " ";
	}

	cout << endl;

	return 0;
}