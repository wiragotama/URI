//URI 1178 array fill 3
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double array[100];
	double a;
	scanf("%lf",&a);
	array[0] = a;
	printf("N[%d] = %.4lf\n",0,array[0]);
	for (int i=1; i<100; i++) {
		array[i] = array[i-1]/2.0;
		printf("N[%d] = %.4lf\n",i,array[i]);
	}
	return 0;
}
