#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int T;
	while (scanf("%d",&T)==1) {
		int arr[T][T];
		for (int i=0; i<T; i++)
			for (int j=0; j<T; j++) 
				arr[i][j] = 0;

		//first diagonal
		for (int i=0; i<T; i++) {
			arr[i][i] = 2;
		}
		//second diagonal
		int idx = 0;
		for (int i=T-1; i>=0; i--) {
			arr[idx][i] = 3;
			idx++;
		}
		
		//1
		int startIdx = (T/3);
		int lastIdx = T - startIdx - 1;
		for (int i=startIdx; i<=lastIdx; i++) {
			for (int j=startIdx; j<=lastIdx; j++) {
				arr[i][j] = 1;
			}
		}

		//4
		int temp = T/2;
		arr[temp][temp] = 4;

		for (int i=0; i<T; i++) {
			for (int j=0; j<T; j++) {
				printf("%d", arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}