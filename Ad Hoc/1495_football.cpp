//URI 1495 football
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;

typedef struct {
	int	team1;
	int team2;
	int distance;
} data;

bool compare(const data &a, const data &b) {
	return (a.distance > b.distance);
}

int main() {
	int n, w;
	while (scanf("%d%d",&n,&w)==2) {
		data arr[n];
		for (int i=0; i<n; i++) {
			scanf("%d%d",&arr[i].team1,&arr[i].team2);
			arr[i].distance = arr[i].team1-arr[i].team2;
		}
		sort(arr,arr+n,compare);
		int totalPoints = 0;
		for (int i=0; i<n; i++) {
			if (arr[i].distance>0) {
				totalPoints+=3;	
			}
			else if (arr[i].distance==0) {
				if (w>=1) {
					w--;
					totalPoints+=3;
				}
				else totalPoints+=1;
			}
			else if (w>abs(arr[i].distance)) {
				w-=(abs(arr[i].distance)+1);
				totalPoints+=3;
			}
			else if (w==abs(arr[i].distance)) {
				w-=abs(arr[i].distance);
				totalPoints++;
			}
		}
		printf("%d\n",totalPoints);
	}
	return 0;
}
