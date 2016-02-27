//URI 1190 right area
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char c;
	scanf("%c",&c);
	
	double arr[12][12];
	double total = 0;
	
	for (int i=0; i<12; i++) {
		for (int j=0; j<12; j++) {
			scanf("%lf",&arr[i][j]);
			if ((i>0) && (i<=5) && (j>11-i)) {
				total+=arr[i][j];
			}
			else if ((i>5) && (i<11) && (j>i)) {
				total+=arr[i][j];
			}
		}
	}
	if (c=='S') {
		printf("%.1lf\n",total);
	}
	else printf("%.1lf\n",total/30.0);
	return 0;
}
