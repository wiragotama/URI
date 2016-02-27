#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int A, B, C;
	while (scanf("%d",&A)==1) {
		if (A!=0) {
			scanf("%d %d", &B, &C);

			double total = (double)A * (double)B;
			double needed = (double) (100.0/(double)C) * total;

			//cout << total << " " << needed << endl;
			cout << (int) floor(sqrt(needed)) << endl;
		}
	}
	return 0;
}