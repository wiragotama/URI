//URI 1485 biochemical digital circuit
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int	p, n, c;
	
	while (scanf("%d%d%d",&p,&n,&c)==3) {
		if (p!=0 && n!=0 && c!=0) {
			int		arr[n+1][p];
			int		count = 0;
			
			for (int i=0; i<n; i++) {
				for (int j=0; j<p; j++) {
					scanf("%d",&arr[i][j]);
				}
			}
			
			for (int j=0; j<p; j++) {
				arr[n][j] = arr[n-1][j];
			}
			
			
			for (int j=0; j<p; j++) {
				
				int i = 0;
				
				while (i<n) {
					if (arr[i][j]==1) {
						int x = 0;
						while (i<n && arr[i][j]==1) {
							x++;
							i++;
						}
						if (x>=c) {
							count++;
						}
					}
					else i++;
				}
			}
			
			printf("%d\n",count);
		}	
	}
	return 0;
}
