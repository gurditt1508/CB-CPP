#include<iostream>
using namespace std;

void Wave(int A[][3], int m, int n){
	
	for(int j = 0; j<n; j++){
		if(j%2 == 0){
			for(int i = 0; i<m; i++){
				cout << A[i][j] << " ";
			}
		}else{
			for(int i = m-1; i >= 0; i--){
				cout << A[i][j] << " ";
			}
		}
	}
}

int main(){
	int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	int m = 3;

	int n = 3;

	Wave(A, m, n);

	return 0;
}
