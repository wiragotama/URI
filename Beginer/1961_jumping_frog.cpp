#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
	int t, b;
	scanf("%d %d",&b, &t);
	int prev = 0;
	int a;
	bool fail = false;
	for (int i=0; i<t; i++) {
		scanf("%d",&a);
		if (i>0 && (abs(a-prev) > b)) {
			//cout << "fak";
			fail = true;
		}
		prev = a;
	}
	fail ? printf("GAME OVER\n") : printf("YOU WIN\n");
	return 0;
}