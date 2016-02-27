//URI 1424 easy prob from rujia liu
#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
	int n, m, a, k;
	
	while(scanf("%d %d",&n,&m)==2) {
		int arr[1000001];
		for (int i=0; i<=1000000; ++i)
			arr[i] = 0;
		
		
		map< pair<int, int>, int> maps;
		map< pair<int, int>, int>::iterator it;
	
		for (int i=0; i<n; ++i) {
			scanf("%d",&a);
			arr[a]++;
			//printf("%d %d %d\n",arr[a],a,i);
			maps.insert( make_pair(make_pair(arr[a],a), i) );
		}
		
		for (int i=0; i<m; ++i) {
			scanf("%d %d",&k,&a);
			if (k<=arr[a]) {
				printf("%d\n",maps.find(make_pair(k,a))->second + 1);
			}
			else printf("0\n");
		}
	}
	return 0;
}
