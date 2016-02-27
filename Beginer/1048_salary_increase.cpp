//URI 1048 salary increase
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double n;
	cin >> n;
	if (n<=400.00) {
		printf("Novo salario: %.2f\n",n*15.0/100.0+n);
		printf("Reajuste ganho: %.2f\n",n*15.0/100.0);
		printf("Em percentual: 15 %\n");
	}
	else if (n<=800.00) {
		printf("Novo salario: %.2f\n",n*12.0/100.0+n);
		printf("Reajuste ganho: %.2f\n",n*12.0/100.0);
		printf("Em percentual: 12 %\n");
	} 
	else if (n<=1200.00) {
		printf("Novo salario: %.2f\n",n*10.0/100.0+n);
		printf("Reajuste ganho: %.2f\n",n*10.0/100.0);
		printf("Em percentual: 10 %\n");
	}
	else if (n<=2000.00) {
		printf("Novo salario: %.2f\n",n*7.0/100.0+n);
		printf("Reajuste ganho: %.2f\n",n*7.0/100.0);
		printf("Em percentual: 7 %\n");
	}
	else {
		printf("Novo salario: %.2f\n",n*4.0/100.0+n);
		printf("Reajuste ganho: %.2f\n",n*4.0/100.0);
		printf("Em percentual: 4 %\n");
	}
	return 0;
}
