//URI 1566 height
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t, n, a;
	scanf("%d",&t);
	while (t) {
		if (t>0) {
			scanf("%d",&n);
			
			int arr[231];
			for (int i=0; i<=230; i++)
				arr[i] = 0;
			
			for (int i=0; i<n; i++) {
				scanf("%d",&a);
				arr[a] = 1;
			}
			
			for (int i=20; i<=230; i++) {
				if (arr[i]==1) {
					printf("%d ",i);
				}
			} 
			printf("\n");
		}
		t--;
	}
	return 0;
}
