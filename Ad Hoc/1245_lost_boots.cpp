//uri 1245 lost boots
#include <iostream>
#include <cstdio>
using namespace std;

//variables
int paired,i,n,size,righ[31],lef[31];
char L;


//main program
int main() {
	while (scanf("%d",&n)==1) {
		paired=0;
		for (i=0; i<=30; i++) {
			righ[i]=0;
			lef[i]=0;
		}
		for (i=1; i<=n; i++) {
			scanf("%d %c",&size,&L);
			if (L=='D') {
				righ[size-30]++;
			}
			else
				lef[size-30]++;
		}
		for (i=0; i<31; i++) {
			if (righ[i]>lef[i]) {
				paired=paired+lef[i];
			}
			else paired=paired+righ[i];
		}
		printf("%d\n",paired);
	}
	return 0;
}
