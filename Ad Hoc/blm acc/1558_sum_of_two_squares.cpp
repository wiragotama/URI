//URI 1558 sum of two squares
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
	vector <int> sum;
	int inp;
	
	for (int i=0; i<=100; ++i) {
		for (int j=0; j<=100; ++j) {
			sum.push_back(i*i+j*j);
		}
	}
	while (scanf("%d",&inp)==1) {
		if ( find(sum.begin(),sum.end(),inp)!=sum.end() ) {
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}
