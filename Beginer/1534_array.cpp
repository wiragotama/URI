#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	while (scanf("%d",&n)==1) {
		int start_2 = n-1;
		int start_1 = 0;
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				if (j==start_2) printf("2");
				else if (j==start_1) printf("1");
				else printf("3");
			}
			start_1++;
			start_2--;
			printf("\n");
		}
	}
	return 0;
}