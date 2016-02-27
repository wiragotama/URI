//1021 bank and coins
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double n;
	int a=0,b=0,c=0,d=0,e=0,f=0;
	int g=0,h=0,i=0,j=0,k=0,l=0;
	
	cin >> n;
	while (n>100.0) {
		n-=100.0;
		a++;
	}
	while (n>50.0) {
		n-=50.0;
		b++;
	}
	while (n>20.0) {
		n-=20.0;
		c++;
	}
	while (n>10.0) {
		n-=10.0;
		d++;
	}
	while (n>5.0) {
		n-=5.0;
		e++;
	}
	while (n>2.0) {
		n-=2.0;
		f++;
	}
	
	while (n>1.0) {
		n-=1.0;
		g++;
	}
	while (n>0.50) {
		n-=0.50;
		h++;
	}
	while (n>0.25) {
		n-=0.25;
		i++;
	}
	while (n>0.10) {
		n-=0.10;
		j++;
	}
	while (n>0.05) {
		n-=0.05;
		k++;
	}
	while (n>0.01) {
		n-=0.01;
		l++;
	}
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",a);
	printf("%d nota(s) de R$ 50.00\n",b);
	printf("%d nota(s) de R$ 20.00\n",c);
	printf("%d nota(s) de R$ 10.00\n",d);
	printf("%d nota(s) de R$ 5.00\n",e);
	printf("%d nota(s) de R$ 2.00\n",f);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",g);
	printf("%d moeda(s) de R$ 0.50\n",h);
	printf("%d moeda(s) de R$ 0.25\n",i);
	printf("%d moeda(s) de R$ 0.10\n",j);
	printf("%d moeda(s) de R$ 0.05\n",k);
	printf("%d moeda(s) de R$ 0.01\n",l);
	return 0;
}
