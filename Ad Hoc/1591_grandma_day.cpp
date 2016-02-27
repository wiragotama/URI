//URI 1591 grandma's day
#include <iostream>
#include <cstdio>
using namespace std;

char matrix[100][100];
int border_x, border_y;

int verticalCheck(int row, int n, int m, string query)
{
	int result = 0;
	for (int i=0; i<m; i++)
	{
		//printf("%c %c\n",matrix[row][i],query[0]);
		if (matrix[row][i]==query[0]) 
		{
			int idx = 0;
			int j = i;
			while (idx<query.length() && j<m && matrix[row][j]==query[idx]) {
				j++;
				idx++;
			}
			if (idx==query.length()) {
				result++;
			}
		}
	}
	return result;
}

int horizontalCheck(int col, int n, int m, string query)
{
	int result = 0;
	for (int i=0; i<n; i++)
	{
		if (matrix[i][col]==query[0]) 
		{
			int idx = 0;
			int j = i;
			while (idx<query.length() && j<n && matrix[j][col]==query[idx]) {
				j++;
				idx++;
			}
			if (idx==query.length())
				result++;
		}
	}
	return result;
}

int main() 
{
	int t, n, m, q;
	scanf("%d",&t);
	for (int T=0; T<t; T++) 
	{
		scanf("%d %d",&n,&m);
		getchar();
		for (int i=0; i<n; i++) 
		{
			for (int j=0; j<m; j++)
			{
				scanf("%c",&matrix[i][j]);
			}
			getchar();
		}
		scanf("%d",&q); //number of query
		string query;
		for (int Q=0; Q<q; Q++) {
			cin >> query;
			//lakukan searching
			int total = 0;
			for (int i=0; i<n; i++) //vertical
			{
				total += verticalCheck(i, n, m, query);
			}
			for (int j=0; j<m; j++) //horizontal
			{
				total += horizontalCheck(j, n, m, query);
			}
			printf("%d\n",total);
			/*cout << query << endl;*/
		}
		//cout << n << " "<<m<<" "<<q << endl;
	}
	return 0;
}