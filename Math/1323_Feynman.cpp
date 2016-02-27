//URI 1323 Feynman
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			int sum = 0;
			for (int i=n; i>=1; i--) {
				sum += (i*i);
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}
