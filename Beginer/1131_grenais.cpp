//URI 1131 grenais
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int x, a, b,c=1, inter=0, gremio=0, draw=0;
	cin >> a >> b;
	if (a > b) {
		inter++;
	}
	else if (a<b) {
		gremio++;
	}
	else draw++;
	
	printf("Novo grenal (1-sim 2-nao)\n");
	cin >> x;
	while (x!=2) {
		c++;
		cin >> a >> b;
		if (a > b) {
			inter++;
		}
		else if (a<b) {
			gremio++;
		}
		else draw++;
		printf("Novo grenal (1-sim 2-nao)\n");
		cin >> x;
	}
	printf("%d grenais\n",c);
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",gremio);
	printf("Empates:%d\n",draw);
	if (inter > gremio) {
		printf("Inter venceu mais\n");
	}
	else if (gremio>inter) {
		printf("Gremio venceu mais\n");
	}
	else printf("Nao houve vencedor\n");
	return 0;
}
