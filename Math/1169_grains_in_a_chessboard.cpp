//URI 1169 grains in a chess board
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

typedef unsigned long long LL;

int main() {
	int t, a;
	scanf("%d",&t);
	for (int x=1; x<=t; x++) {
		scanf("%d",&a);
		LL start = 1;
		LL result = 1;
		
		while (a>1) {
			result += start*=2;
			a--;
		}
		printf("%lld kg\n",result/12000);
	}
	return 0;
}
