#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++) {
		int length;
		scanf("%d",&length);
		(length%2==0) ? printf("0\n") : printf("1\n");
	}
	return 0;
}