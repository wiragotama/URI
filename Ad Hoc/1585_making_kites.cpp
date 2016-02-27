//URi 1585 making kites
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, a, b;
	
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d %d",&a,&b);
		printf("%d cm2\n",a*b/2);
	}
	return 0;
}
