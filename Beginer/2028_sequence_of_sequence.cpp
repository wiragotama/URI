#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	int c = 1;
	while (scanf("%d",&n)==1) {
		int total = 1 + (n*(2+n-1)/2);
		if (total==1)
			printf("Caso %d: %d numero\n",c , total);
		else printf("Caso %d: %d numeros\n",c , total);
		printf("0");
		for (int i=1; i<=n; i++) {
			for (int j=1; j<=i; j++) {
				printf(" ");
				printf("%d",i);
			}
		}
		printf("\n\n");
		c++;
	}
	return 0;
}