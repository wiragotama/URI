//URI 1524 cafetaria queue
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	while (scanf("%d %d",&n, &k)==2) {
		int arr[n+1]; arr[0] = 0; arr[1] = 0;
		int DP[n+1][n+1];

		for (int i=2; i<=n; i++) {
			scanf("%d", &arr[i]);
		}

		DP[1][1] = 0;

		for (int i=2; i<=n; i++) {
			for (int j=1; j<=i; j++) {
				DP[i][j] = 0x3f3f3f3f;

				if (j==1) {
					DP[i][j] = arr[i] - arr[1];
				}
				else if (j==i) {
					DP[i][j] = 0;
				}
				else {
					DP[i][j] = min(DP[i][j], DP[i-1][j] + (arr[i]-arr[i-1])); //last group from previous iteration
					DP[i][j] = min(DP[i][j], DP[i-1][j-1]);
				}
			}
		}

		cout << DP[n][k] << endl;
	}
	return 0;
}