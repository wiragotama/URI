//URI 1536 libertadores
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n, t1, t2, h1, a1, h2, a2;
	char ch, ch1, ch2;
	
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		
		scanf("%d%c%c%c%d",&h1,&ch,&ch1,&ch2,&a2);
		
		scanf("%d%c%c%c%d",&h2,&ch,&ch1,&ch2,&a1);
		
		if ((h1+a1) > (h2+a2)) {
			printf("Time 1\n");
		}
		else if ((h1+a1) < (h2+a2)) {
			printf("Time 2\n");
		}
		else {
			if (a1>a2) {
				printf("Time 1\n");
			}
			else if (a1<a2) {
				printf("Time 2\n");
			}
			else printf("Penaltis\n");
		}
	}
	return 0;
}
