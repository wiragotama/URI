//URI 1556 removing letters
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <set>
using namespace std;

set<string> tempans;

void permutation(int p, int len, string str, string propagated) {
	if (p >= len) {
		tempans.insert(propagated);
	}
	else {
		if (propagated.length())
			tempans.insert(propagated);
		for (int i=p; i<len; i++) {
			permutation(i+1, len, str, propagated+str[i]);
		}
	}
}

int main() {
	string str;
	while (getline(cin, str)) {
		permutation(0, str.length(), str, "");
		set<string>::iterator it;
		for (it=tempans.begin(); it!=tempans.end(); it++)
        	cout << *it << endl;
		tempans.clear();
		cout << endl;
	}
	return 0;
}