//URI 1622 lamps
#include <iostream>
#include <cstdio>
using namespace std;

int find_repetition(int n, int k) {
	int ans = 1;
	int rep = k;
	while (rep!=0) {
		ans++;
		rep = (rep+k)%n;
	}
	return ans*2;
}

void change_switch(string& str, int pos) {
	if (str[pos]=='x')
		str[pos] = 'o';
	else str[pos] = 'x';
}

int main() {
	int N, Q;
	while (scanf("%d %d",&N, &Q)==2) {
		if (!(N==0 && Q==0)) {
			string str;
			cin >> str;
			int len = str.length();

			for (int i=0; i<Q; i++) {
				string copy = str;
				int K, M;
				scanf("%d %d", &K, &M);
				
				M %= find_repetition(N, K);
				int pos = 0;
				while (M>0) {
					change_switch(copy, pos);
					pos+=K;
					if (pos > len-1)
						pos %= len;
					M--;
				}
				cout << copy << endl;
			}
		}
	}
	return 0;
}