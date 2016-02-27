//URI 1237 compare substring
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector<string> subStr1;
vector<string> subStr2;

void generate(int ID, const string& str, int num, int len);

int main() {
	string str1, str2;
	
	while (getline(cin,str1)) {
		getline(cin,str2);
		
		int len1 = str1.length();
		int len2 = str2.length();
		int max = 0;
		
		if (len1>len2) {
			max = len2;
		}
		else max = len1;
		
		bool stop = false;
		while (!stop && max>=1) {
			generate(1,str1,max,len1);
			generate(2,str2,max,len2);
			
			for (int i=0; i<subStr1.size() && !stop; i++) {
				for (int j=0; j<subStr2.size() && !stop; j++) {
					if (subStr1[i]==subStr2[j]) {
						stop = true;
					}
				}
			}
			
			subStr1.clear();
			subStr2.clear();
			if (!stop) max--;
		}
		printf("%d\n",max);
	}
	return 0;
}

void generate(int ID, const string& str, int num, int len) {
	string temp;
	for (int i=0; i<len; i++) {
		temp = "";
		if (i+num-1<len) {
			for (int j=i; j<=i+num-1; j++) {
				temp += str[j];
			}
			if (ID==1) {
				subStr1.push_back(temp);
			}
			else subStr2.push_back(temp);
		}
	}
}
