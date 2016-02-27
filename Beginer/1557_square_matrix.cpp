#include <iostream>
#include <cstdio>
using namespace std;

int length(long number) {
	int len = 0;
	while (number!=0) {
		number/=10;
		len++;
	}
	return len;
}

int main() {
	int n;
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			long start = 1;
			for (int i=1; i<n*2-1; i++) {
				start *= 2;
			}
			int maxLength = length(start);
			start = 1;
			for (int i=0; i<n; i++) {
				long current = start;
				for (int j=0; j<n; j++) {
					if (j>0) printf(" ");
					for (int k=0; k<maxLength-length(current); k++) {
						printf(" ");
					} 
					printf("%ld",current);
					current *= 2;
				}
				printf("\n");
				start *= 2;
			}
			printf("\n");
		}
	}
	return 0;
}