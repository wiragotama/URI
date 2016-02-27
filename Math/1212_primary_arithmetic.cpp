//URI 1212 primary arithmetic
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	int a, b;
	
	while (scanf("%d%d",&a,&b)==2) {
		
		if (!(a==0 && b==0)) {
			int sisa = 0;
			int carry = 0;
			int c;
			
			while (a>0 || b>0 || sisa>0) {
				if (a>0 && b>0) {
					c = a%10 + b%10 + sisa;
					sisa = c/10;
				}	
				else if (b>0) {
					c = b%10 + sisa;
					sisa = c/10;
				}
				else if (a>0) {
					c = a%10 + sisa;
					sisa = c/10;
				}
				else sisa = 0;
				
				if (sisa) 
					carry++;
				a/=10;
				b/=10;
			}
			if (carry==0) {
				printf("No carry operation.\n");
			}
			else if (carry==1) {
				printf("%d carry operation.\n",carry);
			}
			else printf("%d carry operations.\n",carry);
		}
	}
	return 0;
}
