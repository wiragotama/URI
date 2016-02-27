//URI 1120 contract revision
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	int n;
	string str;
	while (getline(cin,str)) {
		if (str[0]!='0') {
			int len = str.length()-1;
			for (int i=2; i<=len; i++) {
				if (str[i]==str[0]) {
						str[i] = '_';
				}
			}
			
			//cout << str << endl;
			
			string sol = "";
			bool lead = true;
			for (int i=2; i<=len; i++) {
				if (str[i]!='_' && str[i]!='0') {
					lead = false;
					sol += str[i];
				}
				else if (str[i]=='0') {
					if (!lead)
						sol += str[i];
				}
				else if (str[i]!='_') {
					sol += str[i];
				}
			}
			if (sol=="") sol = "0";
			
			cout << sol << endl;
		}
	}
	return 0;
}
