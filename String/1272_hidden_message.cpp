//URI 1272 hidden message
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int 	n;
	string	str;
	scanf("%d",&n);
	getchar();
	
	for (int i=0; i<n; i++) {
		getline(cin,str);
		int len = str.length();
		
		bool first = true;
		
		for (int i=0; i<len; i++) {
			if (str[i]!=' ') {
				if (first) {
					first = false;
					printf("%c",str[i]);
				}
			}
			else {
				first = true;
			}
		}
		printf("\n");
	}
	return 0;
}
