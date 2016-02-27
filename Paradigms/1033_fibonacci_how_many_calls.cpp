//URI 1033 fibonacci how many calls
#include <iostream>
#include <cstdio>
using namespace std;

int calls(int x);

int main() {
	long long n;
	int b, cases = 0;
	
	while (scanf("%lld %d",&n,&b)==2) {
		cases++;
		if (!(n==0 && b==0)) {
			int d[100000];
			long long idx, pola = 0;
			d[0] = 1;
			d[1] = 1;
			bool stop = false;
			for (long long i=2; i<=n && !stop; i++) {
				d[i] = (1+d[i-1]+d[i-2]) % b;
				if (d[i]==1 && d[i-1]==1) {
					stop = true;
					pola = i-1;
				}
				//cout << d[i] << endl;
			}
			
			if (pola!=0)
				idx = n % pola;
			else
				idx = n;
			
			printf("Case %d: %lld %d %d\n",cases,n,b,d[idx]);
		}
	}
	
	return 0;
}

int calls(int x) {
	if (x==1) {
		return 1;
	}
	else if (x==0) {
		return 1;
	}
	else return 1+calls(x-1)+calls(x-2);
}
