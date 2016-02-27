//URI 1024 encryption
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	int 	l, len, n;
	string 	str, str1;
	char	temp;
	
	scanf("%d",&n);
	getchar();
	for (int i=0; i<n; i++) {
		getline(cin,str);
		len = str.length();
		
		str1 = "";
		
		for (int j=len-1; j>=0; j--) {
			if (isalpha(str[j]))
				str1 += (str[j] + 3);
			else
				str1 += str[j];
		}
		
		for (int j=len/2; j<len; j++) {
			str1[j] -= 1;
		}
		
		cout << str1 << endl;
	}
	return 0;
}
