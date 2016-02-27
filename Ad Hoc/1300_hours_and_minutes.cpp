//URI 1300 hours and minutes
#include <iostream>
#include <cstdio>
using namespace std;

//variables
int		hours, minutes, angle, a, j, i, arr[181];
bool	reduce;

//main program
int main() {
	hours=0;
	minutes=0;
	angle=0;
	for (j=0; j<=180; j++) {
		arr[j]=0;
	}
	for (j=0; j<=12; j++) {
		reduce=false;
		angle=(j*30);
		minutes=0;
		while ((angle>0) && (minutes<=60)) {
			angle-=6;
			if (minutes%12==0 && minutes>0) {
				angle+=6;
			}
			arr[angle]++;
			minutes++;
		}
		while (minutes<=60) {
			if (!reduce) angle+=6;
			else angle-=6;
			
			if (minutes%12==0 && minutes>0) {
				if (!reduce) angle-=6;
				else angle+=6;
			}
			if (angle>180) {
				reduce=true;
				angle=180-(angle-180);
			}
			arr[angle]++;
			minutes++;
		}
	}
	while (scanf("%d",&a)==1) {
		if (arr[a]>0) {
			printf("Y\n");
		}
		else printf("N\n");
	}
	return 0;
}
