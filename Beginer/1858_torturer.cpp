#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int T;
	int a, min, simpan;
	min = 1000000;
	scanf("%d",&T);
	for (int i=0; i<T; i++) {
		scanf("%d",&a);
		if (a<min) {
			min = a;
			simpan = i;
		}
	}
	printf("%d\n",simpan+1);
	return 0;
}