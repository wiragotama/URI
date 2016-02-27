//1375 pole position
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int	n, c, p;
	int	arr[10001];
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			
			bool still_true = true;
			for (int i=0; i<=10000; i++)
				arr[i] = 0;
				
			for (int i=0; i<n; i++) {
				scanf("%d%d",&c,&p);
				
				if (still_true) {
					if ((i+p>=0) && (i+p<=n-1)) {
						if (p==0) {
							arr[i] = c;
						}
						else {
							if (arr[i+p]==0) {
								arr[i+p] = c;
							}
							else still_true = false;
						}
					}
					else still_true = false;
				}
			}
			if (still_true) {
				for (int i=0; i<=n-1; i++) {
					if (i>0)
						printf(" ");
					printf("%d",arr[i]);
				}
				printf("\n");
			}
			else printf("-1\n");
		}
	}
	return 0;
}
