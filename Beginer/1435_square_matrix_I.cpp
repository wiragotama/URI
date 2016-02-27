//URI 1435 square matrix I
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
			int x=1;
			while (x<=n) {
				for (int i=x; i<=n-x+1; i++) {
					arr[i][x] = x;
					arr[i][n-x+1] = x;
				}
				for (int j=x; j<=n-x+1; j++) {
					arr[x][j] = x;
					arr[n-x+1][j] = x;
				}
				x++;
			}
			
			//printing
			for (int i=1; i<=n; i++) {
				for (int j=1; j<=n; j++) {
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
