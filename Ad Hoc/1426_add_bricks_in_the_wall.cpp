//URi 1426 add bricks in the wall
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t, a, x, y;
	scanf("%d",&t);
	
	int arr[10][10];
	
	for (int k=0; k<t; k++) {
		
		for (int i=0; i<=9; i++) {
			for (int j=0; j<=9; j++) {
				arr[i][j] = -1; //flag
			}
		}
		
		x = 1;
		for (int i=1; i<=5; i++) {
			y = 1;
			for (int j=1; j<=i; j++) {
				scanf("%d",&a);
				arr[x][y] = a;	
				y+=2;
			}
			x+=2;
		}
		
		for (int i=1; i<=9; i++) {
			for (int j=1; j<=i; j++) {
				
				if (arr[i][j]==-1) {
					if (j<9) {
						if (arr[i+1][j+1]==-1) {
							int l = (arr[i-1][j] - (arr[i+1][j] + arr[i+1][j+2])) / 2 ;
							arr[i+1][j+1] = l;	
						}
						
						arr[i][j] = arr[i+1][j] + arr[i+1][j+1];
					}
				}
				
				printf("%d",arr[i][j]);
				if (j<i) {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}
