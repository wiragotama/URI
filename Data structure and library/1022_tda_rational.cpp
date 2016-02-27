//uri 1022 tda rational
#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

//variables
int i,n,a,b,c,d,e,f;
char ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,operand;

//function declarations
//function code
/*int LCM() { //LCM = lowest common multiply
	int m=b;
	int n=d;
	int u=d;
	int v=b;
	while (!((m==0) || (n==0))) {
		if (m>=n) {
			m=m-n; v=v+u;
		}
		else {
			n=n-m; u=u+v;
		}
	}
	if (m==0) return v/2;
	else return u/2;
}*/

int GCD(int x,int y) { //GCD = greates common divisior --> using Euclid's algorithm
	while (!(x==0)||(y==0)) {
		if (x>=y) {
			x=x - y;
		} 
		else y=y - x;
	}
	if (x==0) {
		return y;
	}
	else return x;
}

//main program
int main() {
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		scanf("%d%c%c%c%d%c%c%c%d%c%c%c%d",&a,&ch1,&ch2,&ch3,&b,&ch4,&operand,&ch5,&c,&ch6,&ch7,&ch8,&d);
		//e adalah pembilang, f penyebut
		if ((operand=='+') || (operand=='-')) {
			if (operand=='+') e=a*d+c*b;
			else e=a*d-c*b;
			f=d*b;
		}
		else if (operand=='*') {
			e=a*c;
			f=b*d;
		}
		else {
			e=a*d;
			f=b*c;
		}
		a=GCD(abs(e),abs(f));
		printf("%d/%d = %d/%d\n",e,f,e/a,f/a);
	}
	return 0;
}
