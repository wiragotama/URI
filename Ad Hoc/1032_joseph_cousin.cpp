//URI 1032 Joseph's cousin
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	// generate prime numbers
	vector<int> prime;
	int arr[1000000];
	for (int i=0; i<1000000; i++) {
		arr[i] = 1;
	}
	int count = 0;
	for (int i=2; i<1000000; i++) {
		if (arr[i]==1) {
			if (count<3503) {
				prime.push_back(i);
				count++;
			}
			else break;
			for (int j=i+i; j<1000000; j+=i) {
				arr[j] = 0;
			}
		}
	}

	// problem's solution
	int n;
	while (scanf("%d",&n)==1) {
		if (n==0) break;
		else {
			int r = 0;
		    for (int i = 1; i <= n; i++) {
		        r = (r + prime[n-i]) % i;
		    }
		    cout << r+1 << endl;
		}
	}
	return 0;
}