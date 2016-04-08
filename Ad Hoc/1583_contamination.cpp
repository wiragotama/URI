#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

char matrix[55][55];

void floodFill(int x, int y, int border_x, int border_y) {
	if (x>=0 && y>=0 && x<border_x && y<border_y) {
		if (matrix[x][y]=='A') { //expand
			matrix[x][y]='T';
			floodFill(x,y+1, border_x, border_y);
			floodFill(x,y-1, border_x, border_y);
			floodFill(x+1,y, border_x, border_y);
			floodFill(x-1,y, border_x, border_y);
		}
		//else stop
	}
	//else stop
}

int main() 
{
	int n, m;

	while (scanf("%d %d",&n,&m)==2) 
	{
		if (!(n==0 && m==0)) 
		{
			getchar();
			vector<int> starting_x, starting_y;
			for (int i=0; i<n; i++) 
			{
				for (int j=0; j<m; j++) 
				{
					scanf("%c",&matrix[i][j]);

					if (matrix[i][j]=='T') 
					{
						starting_x.push_back(i);
						starting_y.push_back(j);
					}
				}
				getchar();
			}

			//now process
			for (int i=0; i<starting_x.size(); i++) 
			{
				matrix[starting_x[i]][starting_y[i]] = 'A';
				floodFill(starting_x[i], starting_y[i], n, m);
			}
			
			//output
			for (int i=0; i<n; i++) 
			{
				for (int j=0; j<m; j++) 
				{
					printf("%c",matrix[i][j]);
				}
				printf("\n");
			}
			printf("\n");

		}
	}
	return 0;
}