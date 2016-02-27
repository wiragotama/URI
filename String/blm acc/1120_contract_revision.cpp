//uri 1120 contract revision
#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;

//variables
string str;
char buffer;
int i,len,n;
long long value;
//function declaration
char convert(int x);

//main program
int main() {
	while (scanf("%d ",&n)==1) {
		getline(cin,str);
		if ((n!=0)) {
			len=str.length();
			buffer=convert(n);
			i=0;
			while (i<len) {
				if (str[i]==buffer) {
					str.erase(i,1);
					len--;
				}
				else i++;
			}
			if ((str[0]=='0') || (len==0)) {
				printf("0\n");
			}
			else {
				for (i=0; i<len; i++) {
					printf("%c",str[i]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}

//functions
char convert(int x) {
    if (x==1)
        return '1';
    else if (x==2)
        return '2';
    else if (x==3) 
        return '3';
    else if (x==4) 
        return '4';
    else if (x==5) 
        return '5';
    else if (x==6)
        return '6';
    else if (x==7)
        return '7';
    else if (x==8)
        return '8';
    else if (x==9)
        return '9';
}
