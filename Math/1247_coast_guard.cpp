//URI 1247 coast guard
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	int d, vf, vg;
	double distance;
	while (scanf("%d %d %d",&d, &vf, &vg)==3) {
		double time1 = 12.0/(double)vf;
		double phy = (double)sqrt(144+d*d);
		if ((phy/(double)vg)<=time1)
			printf("S\n");
		else 
			printf("N\n");
	}
	return 0;
}