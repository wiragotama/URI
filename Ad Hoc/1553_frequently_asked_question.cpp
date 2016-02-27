//URI 1553 frequently asked question
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, k, a;
	int arr[1001];
	
	while(scanf("%d %d",&n,&k)==2) {
		if (!(n==0 && k==0)) {
			
			
			for (int i=0; i<=n; i++)
				arr[i] = 0;
				
			for (int i=1; i<=n; i++) {
				scanf("%d",&a);
				arr[a]++;
			}
			
			int simpan = 0;
			for (int i=1; i<=n; i++) {
				if (arr[i]>=k) {
					simpan++;
				}
			}
			
			printf("%d\n",simpan);
		}
	}
	return 0;
}
