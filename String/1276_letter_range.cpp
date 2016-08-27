//URI 1276 letter range
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	string str;
	while (getline(cin, str)) {
		int alpha[26];
		for (int i=0; i<26; i++) {
			alpha[i] = 0;
		}
		for (int i=0; i<str.length(); i++) {
			alpha[str[i]-'a']++;
		}
		bool flag = false;
		bool first = true;
		int i=0;
		while (i<26) {
			if (alpha[i]>0) { //starts of pattern
				if (!first) {
					cout << ", ";
				}
				first = false;
				printf("%c:",'a'+i);
				while (i<26 && alpha[i]) { //end of pattern
					i++;
				}
				printf("%c",'a'+i-1);
			}
			else i++;
		}
		cout << endl;
	}
	return 0;
}