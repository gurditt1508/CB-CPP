#include<iostream>
using namespace std;

 void Transpose(int A[][100], int m, int n){

 	for(int i = 0; i<m; i++){
 		for(int j = 0; j<n; j++){

 			if(i<j){
 				swap(A[i][j], A[j][i]);
 		}
 		}
 	}
 }

int main(){
	
	int A[100][100];

	int m, n;

	cout << "enter rows ";
	cin >> m;

	cout << "enter columns ";
	cin >> n;

	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			cin >> A[i][j];
		}
	}

	Transpose(A, m, n);

	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}