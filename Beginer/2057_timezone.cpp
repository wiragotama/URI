//URI 2057 timezone
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	a = a + b + c;
	if (a>24) {
		a %= 24;
	}
	else {
		while (a<0) {
			a += 24;
		}
	}
	printf("%d\n",a);
	return 0;
}