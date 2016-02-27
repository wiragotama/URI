//URI 1257 array hash
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int 	n, t;
	
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d",&t);
		
		long h = 0;
		string str;
		getchar();
		
		for (int j=0; j<t; j++) {
			getline(cin,str);
			int len = str.length();
			
			for (int k=0; k<len; k++) {
				h += (str[k]-'A' + j + k);
			}		
		}	
		printf("%ld\n",h);
	}
	return 0;
}
