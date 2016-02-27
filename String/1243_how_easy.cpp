//URI 1243 how easy
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	string 	str;
	string	temp;
	
	while (getline(cin,str)) {
		int total = 0;
		int words = 0;
		int avg;
		int len = str.length();
		temp = "";
		
		for (int i=0; i<=len; i++) {
			if (str[i]==' ' || i==len && temp!="") {
				int len2 = temp.length();
				int j = 0;
				while (j < len2-1 && isalpha(temp[j])) {
					j++;
				}		
				if (j==len2-1 && (temp[j]=='.' || isalpha(temp[j]))) {
					words++;
					total = total+len2;
				}
				temp = "";
			}
			else {
				temp = temp + str[i];
			}
		}
		
		if (words==0) {
			avg = 0;
		}
		else {
			avg = total / words;
		}
		
		if (avg<=3) {
			printf("250\n");
		}
		else if (avg<=5) {
			printf("500\n");
		}
		else printf("1000\n");
	}
	return 0;
}
