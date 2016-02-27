//URI 1036 bingo
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, b, a;
	
	while (scanf("%d %d",&n,&b)==2) {
		if (!(n==0 && b==0)) {
			
			bool bingo[n+1];
			for (int i=0; i<=n; i++) {
				bingo[i] = true;
			}
			
			vector<int> arr;
			for (int i=0; i<b; i++) {
				scanf("%d",&a);
				arr.push_back(a);
			}
			
			sort(arr.begin(), arr.end());
			
			for (int i=0; i<b; i++) {
				for (int j=0; j<b; j++) {
					bingo[abs(arr[j]-arr[i])] = false;
				}
			}
			
			bool stop = false;
			for (int i=1; i<=n; i++) {
				if (bingo[i]) {
					stop = true;
					break;
				}
			}
			
			if (!stop) printf("Y\n");
			else printf("N\n");
		}
	}
	return 0;
}
