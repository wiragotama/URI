//URI 1222 short story competition
#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int 	n, l, c;
	string 	str;
	
	while (scanf("%d %d %d",&n,&l,&c)==3) {
		getchar();
		getline(cin,str);
		
		int len = str.length();
		
		vector<int> str_c;
		int chars = 0;
		
		for (int i=0; i<len; i++) {
			if (str[i]==' ') {
				str_c.push_back(chars);
				chars = 0;		
			}
			else if (i==len-1) {
				chars++;
				str_c.push_back(chars);
			}
			else chars++;
		}
		
		int line_count = 0;
		int line = c;
		
		for (int i=0; i<str_c.size(); i++) {
			//cout << "str_c["<<i<<"] "<<str_c[i] << endl;
			if (line==c) {
				line -= str_c[i];
			}
			else if (line>=str_c[i]+1) {
				line -= str_c[i]+1;
			}
			else if (i==str_c.size()) {
				if (line>=str_c[i]) {
					line -= str_c[i];
				}
			}
			else {
				line_count++;
				line = c;
				line -= str_c[i];
			}
		}
		
		if (line<c) {
			line_count++;
		}
		//cout << "line count = " << line_count << endl;
		printf("%d\n",(int)ceil((double)line_count/(double)l));
		
		str_c.clear();
	}
	return 0;
}
