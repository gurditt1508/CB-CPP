#include<iostream>

using namespace std;

int main(){
	int A[3][4];

	int m = 3;
	int n = 4;
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0; i<m; i++){ //printing row-wise
		for(int j = 0; j<n; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i<n; i++){ //printing column-wise
		for(int j = 0; j<m; j++){
			cout << A[j][i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}