#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
	double a, b;
	scanf("%lf %lf",&a, &b);
	double increment = ((b-a)/a)*100;
	printf("%.2lf%c\n",increment,'%');
	return 0;
}