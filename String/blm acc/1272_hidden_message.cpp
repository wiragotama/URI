//uri 1272 hidden message
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

//variables
int i,n,len,j;
string str,real;

//main program
int main() {
	scanf("%d",&n);
	char tmp;
	scanf("%c",&tmp);
	for (i=1; i<=n; i++) {
		getline(cin,str);
		real="";
		len=str.length();	
		j=0;
		while ((j<len) && (!isalpha(str[j]))){  //get the first character
			j++;
		}
		real=real+str[j];
		while (j<len) {
			while (isalpha(str[j])) {
				j++;
			}
			while (str[j]==' ') {
				j++;
			}
			real=real+str[j]; //first character of a word
			j++;
		}
		cout<<real<<endl;
	}
	printf("\n");
	return 0;
}
