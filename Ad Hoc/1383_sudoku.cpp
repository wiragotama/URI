//1383 sudoku
#include <iostream>
#include <cstdio>
using namespace std;

int 	arr[9][9];

bool check_row(int row_number);
bool check_column(int col_number);
bool check_sub_matrix(int top_left, int bottom_right);

int main() {
	int 	n;
	
	scanf("%d",&n);
	for (int k=0; k<n; k++) {
		for (int i=0; i<9; i++) {
			for (int j=0; j<9; j++) {
				scanf("%d",&arr[i][j]);
			}
		}
		bool ret_val = true;
		for (int i=0; i<9 && ret_val; i++) {
			ret_val = check_row(i);
			//printf("hasil row %d %d\n",i,ret_val);
		}
		for (int j=0; j<9 && ret_val; j++) {
			ret_val = check_column(j);
			//printf("hasil kolom %d %d\n",j,ret_val);
		}
		for (int i=0; i<3 && ret_val; i++) {
			for (int j=0; j<3 && ret_val; j++) {
				ret_val = check_sub_matrix(i*3, j*3);
				//printf("hasil submtrix (%d %d) %d\n",i,j,ret_val);
			}
		}
		printf("Instancia %d\n",k+1);
		if (ret_val) {
			printf("SIM\n");
		}
		else printf("NAO\n");
		printf("\n");
	}
	return 0;
}

bool check_row(int row_number) {
	bool	flag[9];
	for (int i=0; i<9; i++)
			flag[i] = false;
	
	bool stop=false;	
	for (int j=0; j<9 && !stop; j++) {
		if (flag[arr[row_number][j]-1])
			stop = true;
		else
			flag[arr[row_number][j]-1]=true;
	}
	return !stop;
}

bool check_column(int col_number) {
	bool	flag[9];
	for (int i=0; i<9; i++)
			flag[i] = false;
	
	bool stop=false;	
	for (int i=0; i<9 && !stop; i++) {
		if (flag[arr[i][col_number]-1])
			stop = true;
		else
			flag[arr[i][col_number]-1]=true;
	}
	return !stop;
}

bool check_sub_matrix(int top_left, int column_top) {
	bool	flag[9];
	for (int i=0; i<9; i++)
			flag[i] = false;
		
	int i = 0;
	bool stop=false;	
	while (i<3 && !stop) {
		int j = 0;
		while (j<3 && !stop) {
			if (flag[arr[top_left+i][column_top+j]-1])
				stop = true;
			else
				flag[arr[top_left+i][column_top+j]-1]=true;
			j++;
		}
		i++;
	}
	return !stop;
}
