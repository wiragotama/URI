//URI 1436 brick game
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t, n, select;
	scanf("%d",&t);
	for (int x=0; x<t; x++) {
		scanf("%d",&n);
		int arr[n];
		for (int i=0; i<n; i++) {
			scanf("%d",&arr[i]);
		}

		for (int i=0; i<n; i++) {
			int numBigger = 0;
			int numLower = 0;
			for (int j=0; j<n; j++) {
				if (j!=i) {
					if (arr[j]>arr[i])
						numBigger++;
					else if (arr[j]<arr[i])
						numLower++;
				}
			}
			if (numBigger==numLower) {
				select = i;
				break;
			}
		}

		printf("Case %d: %d\n",x+1, arr[select]);
	}
	return 0;
}