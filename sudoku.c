#include<stdio.h>
#include<stdlib.h>
int comp(const void *i, const void *j)
  {
    return *(int *)i - *(int *)j;
  }
int sudoku(int grid[9][9]) {
	if (checkRows(grid))
		if (checkColumns(grid))
			if(checkSquares(grid))
				return 1;
	else return 0;
}
//checks an individual row to see if there are duplicate entries
int checkRow(int row[]){
	qsort(row, 9, sizeof(int), comp);

	for (int i = 0; i < 8; i++) {
		//duplicate entry
		if (row[i] == row[i + 1])
			return 0;
		if(row[i]>9||row[i]<1||row[i+1]>9||row[i+1]<0)
			return 0;
	}
//everything is good
	return 1;
}
// checks all rows
int checkRows(int grid[9][9]) {
	int gridcopy[9][9];

	memcpy(gridcopy,grid,sizeof(gridcopy));
	for (int i = 0; i < 9; i++) {

		if (checkRow(gridcopy[i]))
			continue;
		else
			return 0;

	}
}
int checkColumns(int grid[9][9]) {
	int gridcopy[9][9];

	memcpy(gridcopy,grid,sizeof(gridcopy));
	for (int i = 0; i < 9; i++) {
		int column[9];
		for (int j = 0; j < 9; j++) {
			column[j] = gridcopy[j][i];
		}
		if (!checkRow(column))
			return 0;
	}
}

int checkSquares(int grid[9][9]) {
	//debug right now print the grid
	// for(int x=0;x<9;x++){
	// 	for (int i=0;i<9;i++){
	// 		printf ("%d",grid[x][i]);
	// 	}
	// 	printf("\n");
	// }
	int squares[9][3][3];
	int holderx = 0, holdery = 0;
	int holder[9][2] = { { 0, 0 }, { 0, 3 }, { 0, 6 }, { 3, 0 }, { 3, 3 }, { 3,
			6 }, { 6, 0 }, { 6, 3 }, { 6, 6 } };
//fills squares
	for (int x = 0; x < 9; x++) {
		holderx = holder[x][1];
		holdery = holder[x][0];
		int a=0,b=0;
		int row[9]={0};
		int count=0;
		for (int i = holderx; i <= holderx +2; i++) {
			a++;
			for (int j = holdery; j <= holdery + 2; j++) {
				row[count] = grid[i][j];
				b++;
				count++;

			}
			
		}
		if(!checkRow(row))
			return 0;
	}
	
	return 1;
}
