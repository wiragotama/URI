//URI 1431 Klingon Levels
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int n, m, a;
	while (scanf("%d",&n)==1) 
	{
		if (n!=0) 
		{
			int DP[n][1001];
			int jumlahOrang[n];
			
			int min = -1;
			int max = -1;
			
			for (int i=0; i<n; i++)
				for (int j=0; j<=1000; j++)
					DP[i][j] = 0;
			
			for (int i=0; i<n; i++) 
			{
				scanf("%d",&m);
				jumlahOrang[i] = m;
				//per division
				for (int j=0; j<m; j++)
				{
					scanf("%d",&a);
					if (min==-1 || a<min)
						min = a;
					if (max==-1 || a>max)
						max = a;
					for (int k=a; k>=0; k--) 
					{
						DP[i][k] += 1;
					}
				}
			}
			
			int bestDifference = -1;
			if (max==1000)
				max = 999;
			//printf("%d %d %d\n",min,max, bestDifference);
			for (int i=min-1; i<=max+1; i++)
			{
				int differenceNow = 0;
				for (int j=0; j<n; j++)
				{
					//printf("DP[%d][%d]=%d\n",j,i,DP[j][i]);
					differenceNow += abs(abs(jumlahOrang[j]-DP[j][i])-(DP[j][i]));
				}
				//printf("i=%d ;difference=%d\n",i,differenceNow);
				if (bestDifference==-1 || bestDifference > differenceNow)
					bestDifference = differenceNow;
			}
			
			printf("%d\n",bestDifference);
		}
	}
	return 0;
}
