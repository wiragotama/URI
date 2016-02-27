//URI 1382 elementary my dear watson
#include <iostream>
#include <cstdio>
using namespace std;

int swapC;
int arr[10001];

void quicksort(int l, int r) {
	int temp;
	int lr = l;
	int rr = r;
	int pivot = arr[(l+r)/2];
	while (lr<rr) {
		while (arr[lr] < pivot)
			lr++;
		while (arr[rr] > pivot)
			rr--;
		if (lr<=rr) {
			temp = arr[lr];
			arr[lr] = arr[rr];
			arr[rr] = temp;
			lr++;
			rr--;
			if (lr!=rr)
				swapC++;
		}
	}
	if (l<rr)
		quicksort(l, rr);
	if (lr<r)
		quicksort(lr, r);
}

int main() {
	int t, n;
	scanf("%d",&t);
	for (int x=0; x<t; x++) {
		scanf("%d",&n);
		swapC = 0;
		for (int i=0; i<n; i++)
			scanf("%d",&arr[i]);
		quicksort(0,n-1);
		printf("%d\n",swapC);
	}
	return 0;
}