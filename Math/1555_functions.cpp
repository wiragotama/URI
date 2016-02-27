//URI 1555 functions
#include <iostream>
#include <cstdio>
using namespace std;


int func1(int x, int y) {
	return (3*x)*(3*x) + (y*y);
}

int func2(int x, int y) {
	return 2*(x*x) + (5*y)*(5*y);
}


int func3(int x, int y) {
	return y*y*y - (100*x);
}

int main() {
	int n, x, y, ra, be, ca;
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d %d",&x,&y); 
		ra = func1(x,y);
		be = func2(x,y);
		ca = func3(x,y);
		if (ra>be && ra>ca) {
			printf("Rafael ganhou\n");
		}
		else if (be>ra && be>ca) {
			printf("Beto ganhou\n");
		}
		else {
			printf("Carlos ganhou\n");
		}
	}
	return 0;
}
