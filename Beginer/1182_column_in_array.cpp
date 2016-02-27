//URI 1181 line in array
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int col;
	char c;
	scanf("%d",&col); getchar();
	scanf("%c",&c);
	
	double arr[12][12];
	double total = 0;
	
	for (int i=0; i<12; i++) {
		for (int j=0; j<12; j++) {
			scanf("%lf",&arr[i][j]);
			if (j==col) {
				total+=arr[i][j];
			}
		}
	}
	if (c=='S') {
		printf("%.1lf\n",total);
	}
	else printf("%.1lf\n",total/12.0);
	return 0;
}
