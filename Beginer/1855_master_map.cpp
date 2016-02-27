#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

bool isArrow(char ch) {
	return (ch=='^' || ch=='>' || ch=='<' || ch=='v');
}

int arah(char ch) {
	if (ch=='^') return 1;
	else if (ch=='>') return 2;
	else if (ch=='<') return 3;
	else if (ch=='v') return 4;
	else return -1;
}

int main() {
	int col;
	int row;
	scanf("%d %d",&col, &row);
	getchar();
	char arr[row][col];
	bool flag[row][col];
	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			scanf("%c",&arr[i][j]);
			flag[i][j] = false;
		}
		getchar();
	}

	int cur_row = 0;
	int cur_col = 0;
	if (!isArrow(arr[0][0])) {
		printf("!\n");
	}
	else { //process
		bool found = false;
		int way;

		while (!found) {
			if (isArrow(arr[cur_row][cur_col])) {
				way = arah(arr[cur_row][cur_col]);
				flag[cur_row][cur_col] = true;
			}
			else if (arr[cur_row][cur_col]=='*') {
				found = true;
			}

			if (way==1) {
				cur_row--;
			}
			else if (way==2) {
				cur_col++;
			}
			else if (way==3) {
				cur_col--;
			}
			else if (way==4) {
				cur_row++;
			}
			else break;

			if (flag[cur_row][cur_col]) {
				break;
			}
			else flag[cur_row][cur_col] = true;

			if (cur_row>row || cur_row<0 || cur_col > col || cur_col < 0) {
				break;
			}

			//cout << cur_row << " " << cur_col << endl;
		}

		if (found) printf("*\n");
		else printf("!\n");
	}
	return 0;
}