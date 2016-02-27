//uri 1241 fit or don't fit
#include <iostream>
#include <string.h>
#include <cstdio>
#include <stdlib.h>
using namespace std;

//variables
long i,n;
int len1,len2;
char str1[1010],str2[1010];
char temp;
bool get;

//main program
int main() {
	scanf("%ld",&n);
	scanf("%c",&temp);
	for (i=1; i<=n; i++) {
		cin>>str1;
		scanf("%c",&temp);
		cin>>str2;
		scanf("%c",&temp);
		//cout<<str1<<' '<<str2<<endl;
		len1=strlen(str1);
		len2=strlen(str2);
		if (len2>len1) {
			printf("nao encaixa\n");
		}
		else { //confirming whether the second big number is last digit of first number
			get=true;
			while ((len2>=1) && get){
				//printf("%c %c\n",str1[len1-1],str2[len2-1]);
				if (str1[len1-1]!=str2[len2-1]) {
					get=false;
				}
				len2--;
				len1--;
			}
			if (get) {
				printf("encaixa\n");
			}
			else printf("nao encaixa\n");
		}
	}
	return 0;
}
