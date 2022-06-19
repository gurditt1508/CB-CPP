#include<iostream>
using namespace std;

void placeQueens(int n, int* posn, int r){
    //base case
	if(r == n){
	// 	for(int i = 0; i<n; i++){
	// 		cout << posn[i] << " ";
	// 	}
	// 	cout << endl;
	// }
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				if(posn[i] == j){
					cout << " Q ";
				}else{
					cout << " _ ";
				}
			}
			cout << endl;
		}
		cout << endl;
		return;
	}
    //recursive case
	for(int j = 0; j<n; j++){

		//can you place Qr in the jth column of row 'r'

		bool canPlace = true;
		for(int i = 0; i<r; i++){
			if(posn[i] == j || posn[i] == j - (r-i) || posn[i] == j + (r-i)){
				//is a queen already placed in the same column, 
				//left or right diagonal
				canPlace = false;
				break; //this is optional, but if we don't write, we 
				//we are doing unnecessary iterations and comparisons
			}
		}

		if(canPlace){
			posn[r] = j;
			placeQueens(n, posn, r+1);
		}
	}

}

int main(){

    int n = 4;

    int posn[10];

    placeQueens(n, posn, 0); //will place n queens

    return 0;
}