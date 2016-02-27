//URI 1273 Justifier
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, count = 1;
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			getchar();
			
			string str[n];
			int max = 0;
			int len;
			
			for (int i=0; i<n; i++) {
				getline(cin,str[i]);
				len = str[i].length();
				if (len>max) {
					max = len;
				}
			}
			
			if (count>1) printf("\n");
			
			for (int i=0; i<n; i++) {
				len = str[i].length();
				if (len<max) {
					for (int j=0; j<max-len; j++) {
						printf(" ");
					}
				}
				cout << str[i] << endl;
			}	
			count++;
			
		}
	}
	return 0;
}
