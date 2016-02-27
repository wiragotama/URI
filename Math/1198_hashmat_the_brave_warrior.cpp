//URI 1198 hasmat the brave warrior
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	long long a, b;
	while(scanf("%lld%lld",&a,&b)==2) {
		if (a>b) {
			printf("%lld\n",a-b);	
		}
		else {
			printf("%lld\n",b-a);
		}
	}
}
