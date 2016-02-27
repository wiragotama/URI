#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int T;
	while (scanf("%d",&T)==1) {
		int max = -1;
		int A;
		for (int i=0; i<T; i++) {
			scanf("%d",&A);
			if (A>max) {
				max = A;
			}
		}
		if (max<10) cout << "1" << endl;
		else if (max>=10 && max<20) cout << "2" << endl;
		else cout << "3" << endl;
	}
	return 0;
}