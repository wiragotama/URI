//uri 1235 inside out
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

//variables
int i,n,len,p,j;
string str;
char temp;

//main program
int main() {
	scanf("%d",&n);
	scanf("%c",&temp);
	for (i=1; i<=n; i++) {
		getline(cin,str);
		len=str.length();
		p=len/2;
		for (j=p-1; j>=0; j--) {
			printf("%c",str[j]);
		}
		for (j=len-1; j>=p; j--) {
			printf("%c",str[j]);
		}
		printf("\n");
	}
	return 0;
}
