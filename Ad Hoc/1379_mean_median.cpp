//URI 1379 mean median
#include <iostream>
#include <cstdio>
using namespace std;

int main () {
	long c, a, b, sol;
    scanf("%ld%ld",&a,&b);
    while ((a!=0) && (b!=0)) {
        c=2*a-b;
        if ((c<a) || (c>a) && (b<a)) {
            sol=c;
        }
        else sol=2*b-a;
        printf("%ld\n",sol);
        scanf("%ld%ld",&a,&b);
    }
	return 0;
}
