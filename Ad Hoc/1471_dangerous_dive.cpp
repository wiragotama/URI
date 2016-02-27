//URI 1471 dangerous dive
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
	int n, r, a;
	bool arr[10001];
	
	while (scanf("%d %d",&n,&r)==2) {
		memset(arr,false,sizeof(arr));
		
		for (int i=0; i<r; i++) {
			scanf("%d",&a);
			arr[a] = true;
		}
			
		if (n!=r) {
			for (int i=1; i<=n; i++) {
				if (!arr[i]) {
					printf("%d ",i);
				}
			}
			printf("\n");
				}
		else {
			printf("*\n");
		}
	
	}
	return 0;
}
