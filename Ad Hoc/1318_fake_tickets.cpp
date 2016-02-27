//URI 1318 fake tickets
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

//variables
int 	n, m, i, a, total;

//main program
int main() {
	scanf("%d %d",&n,&m);
	do {
		int 	arr[n+1];
		
		total=0;
		for (i=1; i<=n; i++) {
			arr[i]=0;
		}
		
		for (i=1; i<=m; i++) {
			scanf("%d",&a);
			arr[a]++;
		}
		
		for (i=1; i<=n; i++) {
			if (arr[i]>1) 
				total++;
		}
		printf("%d\n",total);
		
		scanf("%d %d",&n,&m);
	} while ((n!=0) && (m!=0));
	return 0;
}
