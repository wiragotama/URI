//URI 1516 image
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int	n, m, size_x, size_y;
	
	while (scanf("%d %d",&n,&m)==2) {
		if (n!=0 && m!=0) {
			char	arr[n][m];
			getchar();
			
			for (int i=0; i<n; i++) {
				for (int j=0; j<m; j++) {
					scanf("%c",&arr[i][j]);
				}
				getchar();
			}
			
			scanf("%d %d",&size_x,&size_y);
			
			int xt = size_x/n;
			int yt = size_y/m;
			
			for (int i=0; i<n; i++) {
				for (int x=0; x<xt; x++) {
					for (int j=0; j<m; j++) {
						for (int y=0; y<yt; y++) {
							printf("%c",arr[i][j]);
						}
					}
					printf("\n");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
