#include<iostream>
using namespace std;

pair<int, int> search(int arr[][3], int m, int n, int target){

	pair<int, int> p = {-1, -1}; //or make_pair(-1, -1)

	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			if(arr[i][j] == target){
				//cout << target << " " << "found at (" << i << " " << j << ")";
				// p.first = i;
				// p.second = j;
				// return p;
				return {i, j};
			}
		}
	}
	//cout << -1;
	//return p;
	return {-1, -1}; 
}

int main(){
	int arr[][3] = {{10, 20, 30},
					{40, 50, 60},
					{70, 80, 90}};

	int m = 3;

	int n = 3;

	int target;

	cout << "enter target ";
	cin >> target;

	pair<int, int> p = search(arr, m, n, target);

	cout << p.first << " " << p.second;
	
	return 0;
	}
