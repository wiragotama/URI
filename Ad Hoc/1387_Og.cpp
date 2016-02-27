//1387 Og
#include <cstdio>
#include <iostream>
using namespace std;

int main () {
	int a,b;
	while (scanf("%d%d",&a,&b)==2) {
		if (a!=0 && b!=0)
			printf("%d\n",a+b);
	}
	return 0;
}
