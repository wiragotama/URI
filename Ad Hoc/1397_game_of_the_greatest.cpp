//1397 Game of the Greatest
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int	n, c, p;
	int	arr[2];
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			arr[0] = 0;
			arr[1] = 0;
			for (int i=0; i<n; i++) {
				scanf("%d%d",&c,&p);
				if (c>p) {
					arr[0]++;
				}
				else if (p>c) {
					arr[1]++;
				}
			}	
			printf("%d %d\n",arr[0],arr[1]);
		}
	}
	return 0;
}
