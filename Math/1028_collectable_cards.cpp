//uri 1028 collectable cards
#include <iostream>
#include <cstdio>
using namespace std;

//variables
int i,n,a,b;

//main program
int main() {
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		scanf("%d %d",&a,&b);
		while ((a>0) && (b>0)) {
			if (a>=b)
				a=a%b;
			else
				b=b%a;
		}
		if (a==0) 
			printf("%d\n",b);
		else
			printf("%d\n",a);
	}
}
