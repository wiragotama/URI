//URI 1401 generating fast, sorted permutation
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

list<char> result;
list<char>::iterator it;
vector<bool> visit;

void permutation(const string& str,int idx, int len);

int main() {
	int 	n;
	string 	str;
	
	scanf("%d",&n);
	getchar();
	for (int i=0; i<n; i++) {
		getline(cin,str);
		sort(str.begin(),str.end());

		do {
			cout << str << endl;
		} while(next_permutation(str.begin(),str.end()));
		cout << endl;
	}
	return 0;
}

void permutation(const string& str,int idx, int len) {
	if (idx==len) {
		for (it=result.begin(); it!=result.end(); ++it) {
			printf("%c",*it);
		}
		printf("\n");
	}
	else {
		for (int i=0; i<len; i++) {
			if (visit[i]==false) {
				result.push_back(str[i]);
				visit[i] = true;
				permutation(str,idx+1,len);
				result.pop_back();
				visit[i] = false;
			}
		}
	}
}
