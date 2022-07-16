#include<iostream>
//printing paths

using namespace std;

void ratMaze(char maze[][5], char path[][5], int i, int j){
	//base case
	if(i < 0 or j < 0){ //if the dest. is in first row or first column
		return;
	}

	if(i == 0 and j == 0){
		// can you reach (0,0)the cell from (0,0)th cell?
		path[i][j] = '1';
		for(int i = 0; i<4; i++){
			for(int j = 0; j<4; j++){
				cout << path[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return;
	}

	//recursive case


	if(maze[i][j] == 'X'){
		return ;
	}
	path[i][j] = '1';
	//ask your friend to check if you can reach (i,j)th cell
	//from the top
	ratMaze(maze, path, i-1, j);

	//ask your friend to check if you can reach (i,j)th cell
	//from the left

	ratMaze(maze, path, i, j-1);
	path[i][j] = '0'; //back-tracking step
	return;
}

int main(){
	char maze[5][5] = {"000X",
					   "00X0",
					   "X000",
					   "0X00"};

	int m = 4;
	int n = 4;

	char path[5][5] = {"0000",
					   "0000",
					   "0000",
					   "0000"};

	ratMaze(maze, path, m-1,n-1);

	return 0;
}