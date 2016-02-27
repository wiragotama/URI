//URi 1221 fast prime number
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

bool test(long &x);

int main() {
	long n, a;
	
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d",&a);
		if (test(a)) {
			printf("Prime\n");
		}
		else printf("Not Prime\n");
	}
	return 0;
}

bool test(long &x) {
	if (x==1) {
		return false;
	}
	else if (x==2) {
		return true;
	}
	else {
		long l = sqrt(x);

		long p = 2;
		bool ok = true;
		while (p<=l && ok) {
			if (x%p==0) {
				ok = false;
			}
			else p++;
		}
		return ok;
	}
}
