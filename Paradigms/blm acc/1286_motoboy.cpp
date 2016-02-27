//URI 1286
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct
{
	int time;
	int pizza;
	double val;
} data;

bool compare(data lhs, data rhs) 
{
	if (lhs.val == rhs.val) 
	{
		return lhs.pizza < rhs.pizza;
	}
	else return lhs.val > rhs.val;
}


int main() 
{
	
	int n, max_weight;
	
	while (scanf("%d",&n)==1) 
	{
		scanf("%d",&max_weight);
		
		data arr[n];
		for (int i=0; i<n; i++) 
		{
			scanf("%d %d",&arr[i].time, &arr[i].pizza);	
			arr[i].val = arr[i].time/arr[i].pizza;
		}	
		
		int sum = 0;
		int time = 0;
		sort(arr, arr+n, compare);
		for (int i=0; i<n && sum<max_weight; i++) 
		{
			//printf("%d %d %lf\n",arr[i].time, arr[i].pizza, arr[i].val);
			if (sum+arr[i].pizza <= max_weight) 
			{
				sum += arr[i].pizza;
				time += arr[i].time;		
			}
		}
		printf("%d min.\n",time);
	}
	return 0;
}
