#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t;
	int registrar;
	double max = 0.0;
	int simpan = -1;
	double score;

	scanf("%d",&t);
	for (int i=0; i<t; i++) {
		scanf("%d %lf",&registrar, &score);
		if (score>=8.0 && score>max) {
			simpan = registrar;
			max = score;
		}
	}

	if (simpan==-1) printf("Minimum note not reached\n");
	else printf("%d\n",simpan);
	return 0;
}