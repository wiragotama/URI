//URI 1240 fit or don't fit
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t;
	long long a, b;
	
	scanf("%d",&t);
	for (int x=1; x<=t; x++) {
		scanf("%lld%lld",&a,&b);
		if (a>b) {
			bool stop = false;
			while (a>0 && b>0 && !stop) {
				if (a%10 != b%10) {
					stop = true;
				}
				else {
					a/=10;
					b/=10;
				}
			}
			if (stop) {
				printf("nao encaixa\n");
			}
			else {
				printf("encaixa\n");
			}
		}
		else if (a==b) {
			printf("encaixa\n");
		}
		else {
			printf("nao encaixa\n");
		}
	}
	return 0;
}
