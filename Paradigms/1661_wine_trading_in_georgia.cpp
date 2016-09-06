//URI 1661 Wine Trading in Gergovia
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int N;
	while (scanf("%d",&N)==1) {
		if (N!=0) {
			int arr[N];
			for (int i=0; i<N; i++) {
				cin >> arr[i];
			}

			long long result = 0;
			long long bag = 0;
			for (int i=0; i<N; i++) {
				bag += arr[i];
				result += abs(bag); 
			}

			cout << result << endl;
		}
	}
	return 0;
}