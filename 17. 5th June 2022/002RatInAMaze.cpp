#include<iostream>

using namespace std;

bool ratMaze(char maze[][5], int i, int j){
	//base case
	// if(i < 0 or j < 0){ additonal base case if we don't want unnecessary recursive calls
	// 	return false;
	// }
	if(i == 0 and j == 0){
		// can you reach (0,0)the cell from (0,0)th cell?
		return true;
	}

	//recursive case

	if(maze[i][j] == 'X'){
		return false;
	}
	if(i == 0){
		return ratMaze(maze, i, j-1);
	}
	if(j == 0){
		return ratMaze(maze, i-1, j);
	}
	//ask your friend to check if you can reach (i,j)th cell
	//from the left

	//ask your friend to check if you can reach (i,j)th cell
	//from the top
	// bool X = ratMaze(maze, i-1, j);
	// bool Y = ratMaze(maze, i, j-1);
	// return X or Y;
	return ratMaze(maze, i-1, j) or ratMaze(maze, i, j-1);

}

int main(){
	char maze[5][5] = {"000X",
						"00X0",
						"0000",
						"0X00"};

	int m = 4;
	int n = 4;

	ratMaze(maze, 0,0) ? cout << "true" : cout << "false";

	return 0;
}