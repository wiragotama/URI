//URI 1252 sort sort sort
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct {
	int number;
	int reminder;
	int even;
} data;

bool comp(data a, data b) {
	if (a.reminder!=b.reminder) {
		return a.reminder < b.reminder;
	}
	else if (a.even==0 && b.even==1) {
		return false;
	}
	else if (a.even==1 && b.even==0) {
		return true;
	}
	else if (a.even==1 && b.even==1) {
		return (a.number>b.number);
	}
	else return (a.number<b.number);
}

int main() {
	int n, r;
	while (scanf("%d %d",&n,&r)==2) {
		printf("%d %d\n",n,r);
		if (n!=0 && r!=0) {
			data arr[n];
			for (int i=0; i<n; i++) {
				scanf("%d",&arr[i].number);
				arr[i].reminder = arr[i].number%r;
				arr[i].even = abs(arr[i].number)%2;
			}
			sort(arr,arr+n,comp);
			for (int i=0; i<n; i++) {
				printf("%d\n",arr[i].number);
			}
		}
	}
	//cout << -20%3 << endl;
	return 0;
}
