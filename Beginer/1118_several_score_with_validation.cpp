//URI 1118 several score with validation
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	bool stop=false;
	int pil;
	while (!stop) {
		int valid = 0;
		double sum=0;
		double n;
		while (valid<2) {
			cin >> n;
			if (n>=0.0 && n<=10.0) {
				valid++;
				sum+=n;
			}
			else printf("nota invalida\n");
		}
		printf("media = %.2f\n",sum/(double)valid);
		printf("novo calculo (1-sim 2-nao)\n");
		cin >> pil;
		while (pil!=1 && pil!=2) {
			printf("novo calculo (1-sim 2-nao)\n");
			cin>>pil;
		}
		if (pil==2) {
			stop = true;
		}
	}
	return 0;
}
