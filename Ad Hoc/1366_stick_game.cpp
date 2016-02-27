//URI 1366 stick game
#include <iostream>
#include <cstdio>
using namespace std;

void quick_sort(int l, int r);
//variables & type
typedef struct {
	int number;
	int count;
}data;
int		i, n, a, b, rectangles;
data	arr[1001];
bool	ket;

//main program
int main() {
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			rectangles=0;
			for (i=1; i<=n; i++) {
				scanf("%d%d",&a,&b);
				while (b>=4) {
					b-=4;
					rectangles++;
				}
				arr[i].number=a;
				arr[i].count=b;
			}
			quick_sort(1,n);
			//printf("out\n");
			i=1;
			while (i<=n) {
				if (arr[i].count>=2) { //ud pasti <4
					i++;
					ket=false;
					while (i<=n && !ket) {
						if (arr[i].count<2) {
							i++;
						}
						else ket=true;
					}
					if (ket) {
						rectangles++;
					}
					//ud dpt arr[i].count>=2
					i++;
				}
				else i++;
			}
			printf("%d\n",rectangles);
		}
	}
	return 0;
}

//quick sort
void quick_sort(int l, int r) {

int 	lr, rr, pivot;
data 	temp;

	lr=l; rr=r;
	pivot = (arr[lr].number+arr[rr].number)/2;
	do {
		while (arr[lr].number<pivot) {
			lr++;
		}
		while (arr[rr].number>pivot) {
			rr--;
		}
		if (lr<=rr) {
			temp=arr[lr];
			arr[lr]=arr[rr];
			arr[rr]=temp;
			lr++;
			rr--;
		}
	} while (lr<=rr);
	if (lr<r) quick_sort(lr,r);
	if (rr>l) quick_sort(l,rr);
}
