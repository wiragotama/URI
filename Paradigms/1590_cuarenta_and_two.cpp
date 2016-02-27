//URi 1590 cuarenta and two
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int result;
int arr[35];
int	t, n, k;

void make(int start, int iteration, int depth, int temp);

int main() {
	scanf("%d",&t);
	for (int j=0; j<t; j++) {
		scanf("%d %d",&n,&k);
		
		for (int i=0; i<n; i++) {
			scanf("%d",&arr[i]);
		}
	
		make(0,0,k,-1);
		printf("%d\n",result);
		result = 0;
	}
	return 0;
}

void make(int start, int iteration, int depth, int temp) {
	if (iteration < depth) {
		//cout << "start " << start << " iteration " << iteration << endl;	
		for (int i=start; i<n; i++) {
			if (temp==-1) {
				temp = arr[i];
				make(i+1, iteration+1, depth, temp);
			}
			else {
				int x = temp & arr[i];
				//cout << "depth = " << iteration << " " << temp << " & " << arr[i] << " " << x << endl;
				make(i+1, iteration+1, depth, x);
			}
			
			if (iteration == 0) temp = -1;
		}
	}
	else {
		if (temp>result) result = temp;
		//cout << "result " << result << endl;
	}
}
