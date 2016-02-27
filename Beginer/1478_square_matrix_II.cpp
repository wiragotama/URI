//URI 1478 square matrix II
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, count=0, u;
	
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			if (count > 0) {
				
			}
			
			int arr[n+1][n+1];
			
			//filling
			int j, x = 1, p = 1;
			while (x<=n) {
				j = 1;
				int start = x;
				while (start>1) {
					arr[p][j] = start;
					++j;
					--start;
				}
				while (j<=n) {
					arr[p][j] = start;
					++j;
					++start;
				}
				++x;
				++p;
			}
			
			//printing
			for (int i=1; i<=n; i++) {
				for (j=1; j<=n; j++) {
					if (j>1) {
						printf(" ");
					}
					if (arr[i][j]/10==0) {
						printf("  ");
					}
					else if (arr[i][j]/100==0) {
						printf(" ");
					}
					printf("%d",arr[i][j]);
				}
				printf("\n");
			}
			printf("\n");
			//++count;
		}	
	}
	return 0;
}
