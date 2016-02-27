//URi 1228 start grid
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int n, a;
bool isSame(int* arr, int* brr, int n);
int findLocation(int *arr, int n, int number);
void geser(int* arr, int src, int dest);

int main() {
	while (scanf("%d",&n)==1) {
		
		int takeOver = 0;
		int count = 0;
		
		int arr[n];
		for (int i=0; i<n; i++) {
			scanf("%d",&a);
			arr[i]=a;
		}	
		
		int brr[n];
		for (int i=0; i<n; i++) {
			scanf("%d",&a);
			brr[i]=a;
		}
		
		while (!isSame(arr,brr,n) && (count<n)) {
			int target = findLocation(brr,n,arr[count]);
			geser(brr,target,count);
			takeOver+=(target-count);
			count++;	
		}
		
		printf("%d\n",takeOver);
	}
	return 0;
}

bool isSame(int* arr, int* brr, int n) {
	bool same=true;
	for (int i=0; i<n && same; i++) {
		if (arr[i]!=brr[i]) {
			same=false;
		}
	}
	return same;
}

void geser(int* arr, int src, int dest) {
	int temp = arr[src];
	for (int i=src; i>dest; i--) {
		arr[i] = arr[i-1];
	}
	arr[dest]=temp;
}

int findLocation(int *arr, int n, int number) {
	for (int i=0; i<n; i++) {
		if (arr[i]==number) {
			return i;
		}
	}
}
