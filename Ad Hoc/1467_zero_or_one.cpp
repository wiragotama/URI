//1467 zero or one
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a,b,c;
	while (scanf("%d%d%d",&a,&b,&c)==3) {
		if ((a==b) && (a==c)) {
			printf("*\n");
		}
		else if ((b==c) && (a!=b)) {
			printf("A\n");
		}
		else if ((a==b) && (b!=c)) {
			printf("C\n");
		}
		else printf("B\n");
	}
	return 0;
}
