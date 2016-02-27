//URI 1704 arranging tasks
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() 
{	
	int n, h = 2;
	
	while (scanf("%d %d",&n, &h)==2) 
	{
		int arr[h+1];
		
		for (int i=1; i<=h; i++) {
			arr[i] = 0;
		}
		int val, time, total = 0;
		for (int i=0; i<n; i++) 
		{
			scanf("%d %d",&val, &time);
			if (arr[time] < val) {
				arr[time] = val;
			}
			total += val;
		}
		
		int use = 0;
		for (int i=1; i<=h; i++) 
		{
			use += arr[i];
		}
		
		printf("%d\n",total-use);
	}
	return 0;
}
