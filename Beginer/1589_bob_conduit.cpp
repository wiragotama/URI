#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d",&T);
	for (int i=0; i<T; i++) {
		int R1, R2;
		scanf("%d %d",&R1, &R2);
		unsigned long res = R1*2 + R2*2;
		printf("%lu\n",res/2);
	}
	return 0;
}