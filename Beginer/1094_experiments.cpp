//URI 1094 experiments
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char c, skip;
	int n, Coelho=0, a, Ratos=0, Sapo=0, total=0;
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d%c%c",&a,&skip,&c);
		switch (c) {
			case 'C' : {
				Coelho+=a;
				break;
			}
			case 'R' : {
				Ratos+=a;
				break;
			}
			case 'S' : {
				Sapo+=a;
				break;
			}
		}
		total+=a;
	}
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",Coelho);
	printf("Total de ratos: %d\n",Ratos);
	printf("Total de sapos: %d\n",Sapo);
	printf("Percentual de coelhos: %.2f %\n",(float)Coelho*100/(float)total);
	printf("Percentual de ratos: %.2f %\n",(float)Ratos*100/(float)total);
	printf("Percentual de sapos: %.2f %\n",(float)Sapo*100/(float)total);
	return 0;
}
