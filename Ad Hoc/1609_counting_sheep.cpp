#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main() 
{
	int T;
	scanf("%d",&T);
	for (int i=0; i<T; i++) {
		int N, a;
		set<int> myset;

		scanf("%d",&N);
		for (int j=0; j<N; j++) {
			scanf("%d",&a);
			// printf("%d", a);
			myset.insert(a);
		}

		cout <<myset.size() << endl;
	}
	return 0;
}