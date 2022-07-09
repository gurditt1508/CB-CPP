/*
Sudoku
Given a partially filled 'n x n' grid, the goal is to assign digits from 1 to 9 to the empty cells 
so that every row, column, and subgrid of size '√n x √n'  contains exactly one instance of 
the digits from 1 to 9. 
Assume 'n' is a perfect square, hence there are 'n' subgrids of size '√n x √n' each.
*/

#include<iostream>
#include<cmath>

using namespace std;

bool canPlaceDigit(int n, int grid[][9], int i, int j, int d){

	for(int k = 0; k<n; k++){
		if(grid[i][k] == d or grid[k][j] == d){ //same row or column
			return false;
		}
	}

	int rn = sqrt(n); // n is perfect square so we can store in int
	int sx = i/rn * rn;
	int sy = j/rn * rn; //starting coordinates of sub grid of (i, j)th cell

	for(int x = sx; x < sx + rn; x++){ //rn = root of n
		for(int y = sy; y < sy + rn; y++){ //iterating over sub grid
			if(grid[x][y] == d){
				return false;
			}
		}
	}
	return true;

}

void solve(int n, int grid[][9], int i, int j){
	//base case
	if(i == n){
		//you have filled all the empty cells in all the rows
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				cout << grid[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return;
	}


	//recursive case

	if(j == n){
		//you've completely filled the ith rowm so start
		//filling from the 0th column of the (i+1)th row
		solve(n, grid, i+1, 0);
		return;
	}

	if(grid[i][j] != 0){
		solve(n, grid, i, j+1);
		//(i,j)th cell already has a digit, therefore skip it
		return;
	}

	//(i,j)th cell is empty therefore you have to assign it a digit
	for(int d = 1; d<=9; d++){
		if(canPlaceDigit(n, grid, i, j, d)){
			grid[i][j] = d;
			solve(n, grid, i, j+1);
			grid[i][j] == 0; //BACKTRACKING STEP
		}
	}

}

int main(){

	int n = 9;

	int grid[][9] = {{7,8,0,4,0,0,1,2,0},
					 {6,0,0,0,7,5,0,0,9},
					 {0,0,0,6,0,1,0,7,8},
					 {0,0,7,0,4,0,2,6,0},
					 {0,0,1,0,5,0,9,3,0},
					 {9,0,4,0,6,0,0,0,5},
					 {0,7,0,3,0,0,0,1,2},
					 {1,2,0,0,0,7,4,0,0},
					 {0,4,9,2,0,6,0,0,7}};

	solve(n, grid, 0,0);

	return 0;

}