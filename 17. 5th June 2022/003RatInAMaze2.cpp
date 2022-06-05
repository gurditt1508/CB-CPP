#include<iostream>
//counting paths

using namespace std;

int ratMaze(char maze[][5], int i, int j){
	//base case
	if(i < 0 or j < 0){ //if the dest. is in first row or first column
		return 0;
	}

	if(i == 0 and j == 0){
		// can you reach (0,0)the cell from (0,0)th cell?
		return 1;
	}

	//recursive case

	if(maze[i][j] == 'X'){
		return 0;
	}
	//ask your friend to check if you can reach (i,j)th cell
	//from the top
	int X = ratMaze(maze, i-1, j);

	//ask your friend to check if you can reach (i,j)th cell
	//from the left

	int Y = ratMaze(maze, i, j-1);

	return X + Y;
}

int main(){
	char maze[5][5] = {"000X",
					   "00X0",
					   "X000",
					   "0X00"};

	int m = 4;
	int n = 4;

	cout << ratMaze(maze, m-1,n-1);

	return 0;
}