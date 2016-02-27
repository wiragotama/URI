#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	bool attacked[n];
	long long int total = 0;
	int totalAttacked = 0;

	for (int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		total += arr[i];
		attacked[i] = false;
	}

	//cout << total << endl;

	int i = 0;
	int next;
	while (i>=0 && i<n && arr[i]!=0) {
		//cout << i << endl;
		if (arr[i]%2==0) {
			next = i-1;
		}
		else next=i+1;
		if (!attacked[i]) {
			attacked[i] = true;
			totalAttacked++;
		}
		arr[i]--;
		total--;
		i=next;
	}

	printf("%d %lld\n",totalAttacked, total);
	return 0;
}