//URI 1036 bhaskara's formula
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	float a,b,c;
	float s, d, r1, r2;
	
	cin>>a>>b>>c;
	s = (b*b) - (4*a*c);
	d = 2*a;
	if (s<0 || d==0) {
		printf("Impossivel calcular\n");
	}
	else {
		r1 = (b*(-1) + sqrt(s)) / d;
		r2 = (b*(-1) - sqrt(s)) / d;
		printf("R1 = %.5f\n",r1);
		printf("R2 = %.5f\n",r2);
	}
	return 0;
}
