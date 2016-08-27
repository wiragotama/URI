//URI 1278
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

string parse(string str) {
	int len = str.length();
	bool flag = true; //first word
	bool flag2 = false; //sequence of spaces
	string ans = "";
	for (int j=0; j<len; j++) {
		if (str[j]==' ') {
			flag2 = true;
		}
		else {
			if (flag2) {
				flag2 = false;
				if (!flag)
					ans += " ";
			}
			flag = false;
			ans += str[j];
		}
	}
	return ans;
}

int main() {
	int t;
	int c = 0;
	while (scanf("%d",&t)==1) {
		if (t!=0) {
			if (c>0)
				cout << endl;

			getchar();
			vector<string> sentences;
			vector<int> lengths;
			int max_length = -1;

			for (int i=0; i<t; i++) {
				string str;
				getline(cin, str);
				string parsed = parse(str);
				int len = parsed.length();
				if (len > max_length)
					max_length = len;
				lengths.push_back(len);
				sentences.push_back(parsed);
			}
			for (int i=0; i<t; i++) {
				for (int j=0; j<max_length-lengths[i]; j++) 
					printf(" ");
				cout << sentences[i] << endl;
			}
			c++;
		}
	}
	return 0;
}