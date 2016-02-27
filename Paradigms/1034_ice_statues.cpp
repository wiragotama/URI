//URi 1034 ice statues festival
#include <iostream>
#include <cstdio>
using namespace std;

int d[25];
int minimum;
int	n;

void haha(int sisa, int count);

int main() {
	int	t, m;
	
	scanf("%d",&t);
	for (int i=0; i<t; i++) {
		scanf("%d %d",&n,&m);
		
		minimum = 1000001;
		for (int j=0; j<n; j++) {
			scanf("%d",&d[j]);
		}
		
		int C[m+1];
		C[0] = 0;
		for (int p=1; p<=m; p++) {
			minimum = 1000001;
			for (int j=0; j<n; j++) {
				if (d[j]<=p) {
					if (1+C[p-d[j]]<minimum) {
						minimum = 1 + C[p-d[j]];
					}
				}
			}
			C[p] = minimum;
		}
		
		cout << C[m] << endl;
	}
	return 0;
}
