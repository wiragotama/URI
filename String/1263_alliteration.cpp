//URI 1263 alliteration
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;

bool okay(const string& str1, const string& str2);

int main() {
	string inp;
	while (getline(cin,inp)) {
		int len = inp.length();
		int alliteration = 0;
		vector<string> str;
		string temp = "";
		
		for (int i=0; i<len; i++) {
			if (inp[i]==' ' || i==len-1) {
				str.push_back(temp);
				temp = "";
			}
			else temp += inp[i];
		}
		
		int x = 0;
		int i = x + 1;
		while (x < str.size()) {
			int c = 0;
			while (i<str.size() && okay(str[x],str[i])) {
				c++;
				i++;
			}
			x = i;
			i = x + 1;
			if (c>=1) {
				alliteration++;
			}
		}
		
		printf("%d\n",alliteration);
	}
	return 0;
}

bool okay(const string& str1, const string& str2) {
	int len1 = str1.length();
	int len2 = str2.length();
	bool ok = (tolower(str1[0]) == tolower(str2[0]));
	return ok;
}
