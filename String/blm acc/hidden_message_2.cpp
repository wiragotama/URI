//uri 1272 hidden message
#include <iostream>
#include <cstdio>
using namespace std;

//variables
int n;
char tmp;
bool first;

//main program
int main() {
	scanf("%d",&n);
	scanf("%c",&tmp);
	first=true;
	while (scanf("%c",&tmp)==1) {
		if ((isalpha(tmp)) && first) {
			first=false;
			printf("%c",tmp);
		}
		else if (tmp=='\n') {
			printf("%c",tmp);
		}
		else if (tmp==' ') {
			first=true;
		}
	}
	//printf("\n");
	//printf("\n");
	return 0;
}
