//URI 1176 fibonacci in array
#include <iostream>
#include <cstdio>
using namespace std;

#define uint64 unsigned long long 

int main() {
	uint64 arr[61];
	int n, a;
	arr[0] = 0;
	arr[1] = 1;
	for (int i=2; i<=60; i++) {
		arr[i] = arr[i-1] + arr[i-2];
	}
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> a;
		printf("Fib(%d) = %lld\n",a,arr[a]);
	}
	return 0;
}
