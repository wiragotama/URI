//URi 1548 canteen queue
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

bool comp(int a, int b) {
	return (a>b);
}

int main() {
	int n, t;
	
	scanf("%d",&n);
	for (int i=0; i<n; ++i) {
		scanf("%d",&t);
		int	arr[t];
		int sorted[t];
		for (int j=0; j<t; ++j) {
			scanf("%d",&arr[j]);
			sorted[j] = arr[j];
		}
		int count = 0;
		sort(sorted,sorted+t,comp);
		for (int j=0; j<t; ++j) {
			if (sorted[j]==arr[j]) {
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
