//URI 1679 assistance required
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int ans  = 0;
	vector<int> sol;
	for (int i=2; i<=60000; i++) {
		sol.push_back(i);
	}
	for (int i=0; i<sol.size(); i++) {
		ans++;
		int del = 0;
		int j = i + sol[i];
		while (j<sol.size()) {
			sol.erase(sol.begin() + j - del);
			j += sol[i];
			del++;
		}
		if (ans==4000) break;
	}
	int N;
	while (scanf("%d", &N)==1) {
		if (N!=0) {
			cout << sol[N-1] << endl;
		}
	}
	return 0;
}