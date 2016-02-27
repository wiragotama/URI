//URI 1214 above average
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, t;
	int arr[1000];
	double total;
	double sum;
	
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d",&t);
		total = 0;
		sum = 0;
		for (int j=0; j<t; j++) {
			scanf("%d",&arr[j]);
			total += arr[j];
		}
		total /= t;
		for (int j=0; j<t; j++) {
			if (arr[j]>total) {
				sum++;
			}
		}
		printf("%.3lf%\n",sum*100/t);
	}
	return 0;
}
