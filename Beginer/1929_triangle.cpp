#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int arr[4];
	for (int i=0; i<4; i++) {
		scanf("%d",&arr[i]);
	}

	sort(arr, arr+4);
	bool ok = false;

	for (int i=0; i<4; i++) {
		for (int j=0; j<4; j++) {
			for (int z=0; z<4; z++) {
				if ((z!=i) && (z!=j) && (j!=i) && (z>j) && (z>i)) {
					if (arr[i]+arr[j] > arr[z]) {
						ok = true;
					}
				}
			}
		}
	}

	ok ? printf("S\n") : printf("N\n");
	return 0;
}