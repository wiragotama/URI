//1441 hailstone sequences
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n;
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			vector<int> arr;
			int i = 1;
			int max = n;
			arr.push_back(n);
			
			while (n!=1) {
				if (arr[i-1]%2==0) {
					n = arr[i-1]/2;
				}
				else {
					n = arr[i-1]*3 + 1;
				}
				arr.push_back(n);
				
				if (n>max) {
					max = n;
				}
				i++;
			}
			printf("%d\n",max);
		}
	}
	return 0;
}
