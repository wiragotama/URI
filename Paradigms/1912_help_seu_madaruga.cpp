//URI 1912 selp seu madaruga
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <functional>
using namespace std;

const long double EPS = 1e-10;
int cmp(long double x, long double y = 0, long double tol = EPS) {
    return( x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

int main() {
	int n, a;
	while (scanf("%d %d",&n, &a)==2) {
		if (!(n==0 && a==0)) {
			vector<long long> d(n);
			long long input;

		    for (int i=0; i<n; i++) {
		    	cin >> d[i];
		    }

		    sort(d.begin(), d.end());
		    long long total = accumulate(d.begin(), d.end(), 0LL);

	     	if (a == total || a == 0)
	      		cout << ":D" << endl;
		    else if (a > total)
	      		cout << "-.-" << endl;
		    else {
		    	long double min = 0, max = d[n-1];
		    	while (cmp(min, max)==-1) {
		    		long double mid = (min + max) * 0.5;
		    		long double cur = 0;
		    		for (int i=n-1; i>=0; i--) {
		    			if (cmp(d[i],mid)==1) cur += d[i] - mid;
		    			else break;
		    		}
		    		if (cmp(a, cur) == 0) {
						min = mid;
						break;
			        }
			        if (cmp(cur, a) == 1)
						min = mid;
			        else
						max = mid;
		    	}		    	
		    	printf("%.4Lf\n",min);
		    }
		}
	}
	return 0;
}