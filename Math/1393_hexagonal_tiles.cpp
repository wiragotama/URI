//URI 1393 hexagonal tiles
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;
	while (scanf("%d",&n)==1) 
	{
		if (n!=0) {
			//compute
			int DP[n+1];
			for (int i=n; i>=0; i--) 
			{
				if (i==n) {
					DP[i] = 1;
				}
				else {
					if (i==n-1) {
						DP[i] = DP[i+1];
					}
					else {
						DP[i] = DP[i+1] + DP[i+2];
					}
				}
			}
			printf("%d\n",DP[0]);
		}
	}
	return 0;
}