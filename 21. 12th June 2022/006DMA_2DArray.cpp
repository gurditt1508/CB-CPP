#include<iostream>

using namespace std;

void f1(int* A){}

void print(int** ptr, int m, int n){
for(int i = 0; i<m; i++){
	for(int j = 0; j<n; j++){
		cout << ptr[i][j] << " ";//cout << *(*(ptr + i) + j) << " "; 
	}
	cout << endl;
	}

}

void f2(int B[][4]){}

int main(){

	int A[5];
	f1(A);

	int B[3][4];
	f2(B);
	
	int m;

	cout << "enter the value of m: ";

	cin >> m;

	int n;

	cout << "enter the value of n: ";

	cin >> n;

	int** ptr = new int*[m];

	for(int i = 0; i<m; i++){
		ptr[i] = new int[n];
	}

	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			cin >> ptr[i][j]; 
		}
	}

	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			cout << ptr[i][j] << " ";//cout << *(*(ptr + i) + j) << " "; 
		}
		cout << endl;
	}

	print(ptr, m, n);

	cout << endl;

	return 0;
}