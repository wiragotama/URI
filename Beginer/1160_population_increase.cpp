//URI 1160 population increase
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int t;
	long a, b;
	double ra, rb;
	
	scanf("%d",&t);
	for (int i=0; i<t; i++) {
		scanf("%ld %ld %lf %lf",&a,&b,&ra,&rb);
		
		bool stop = false;
		int p;
		for (p=1; p<=100 && !stop; p++) {
			a = a + (ra/100.0) * a;
			b = b + (rb/100.0) * b;
			if (a>b) {
				stop = true;
			}
		}
		
		if (stop) 
			printf("%d anos.\n",p-1);
		else {
			printf("Mais de 1 seculo.\n");
		}
	}
	return 0;
}
