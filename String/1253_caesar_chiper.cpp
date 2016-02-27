//uri 1253 caesar chiper
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

//variables
int i,n,shift,len,j,p;
string str;
char tmp,arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
bool get;

//main program
int main() {
	scanf("%d",&n);
	scanf("%c",&tmp);
	for (i=1; i<=n; i++) {
		getline(cin,str);
		scanf("%d",&shift);
		scanf("%c",&tmp);
		//cout<<str<<' '<<shift<<endl;
		j=0;
		len=str.length(); 
		while (j<len) {
			p=0;
			get=false;
			while ((!get) && (p<=25)) {
				if (arr[p]==str[j]) {
					get=true;
				}
				else p++;
			}
			p=p-shift;
			if (p<0) {
				p=p+26;
			}
			printf("%c",arr[p]);
			j++;
		}
		printf("\n");
	}
	return 0;
}
