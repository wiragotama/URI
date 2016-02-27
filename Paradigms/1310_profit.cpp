//URI 1310 profit
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int n;
	while (scanf("%d",&n)==1) {
		
		int arr[n+1];
		int a, revenue;
		int max = 0;
		
		memset(arr,0,sizeof(arr));
		scanf("%d",&revenue);
		
		for (int i=1; i<=n; i++) {
			scanf("%d",&a);
			arr[i] = arr[i-1] + a;
		}
		
		/*for (int i=1; i<=n; i++) 
			cout << arr[i] << endl;*/
		
	
		for (int j=n; j>=1; j--){	
			int x;
			for (int i=j-1; i>=0; i--) {
				if (i==0) {
					x = arr[j]-((j-i)*revenue);
				}
				else {
					x = arr[j]-arr[i]-((j-i)*revenue);
					//cout << "j= " << j << " i=" << i << " arr[j]=" << arr[j] << " arr[i]=" << arr[i] << " x="<<x<<endl;
				}
				if (x > max) {
					max = x;
				}
			}
		}
		
		printf("%d\n",max);
	}
	return 0;
}
