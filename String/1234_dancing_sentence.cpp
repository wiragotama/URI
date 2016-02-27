//uri 1234 dancing sentence
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

//variables
int count;
char tmp;

//main program
int main() {
	while (scanf("%c",&tmp)==1) {
		if (tmp=='\n') {
			printf("%c",tmp);
			count=0;
		}
		else if (isalpha(tmp)) {
			count++;
			if (count%2==1) {
				printf("%c",toupper(tmp));
			}
			else printf("%c",tolower(tmp));
		}
		else printf("%c",tmp);
	}
	return 0;
}
