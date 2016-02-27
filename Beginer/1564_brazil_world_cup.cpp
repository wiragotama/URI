#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	while (scanf("%d",&n)==1) {
		if (n==0) printf("vai ter copa!\n");
		else printf("vai ter duas!\n");
	}
	return 0;
}