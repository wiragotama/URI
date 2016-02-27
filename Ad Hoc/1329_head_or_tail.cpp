//p1329 head or tail
#include <iostream>
#include <cstdio>
using namespace std;

int main () {
	int 	n, t;
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			int arr[2];
			arr[0] = 0;
			arr[1] = 0;
			for (int i=0; i<n; i++) {
				scanf("%d",&t);
				arr[t] ++;
			}
			printf("Mary won %d times and John won %d times\n",arr[0],arr[1]);
		}
	}
	return 0;
}
