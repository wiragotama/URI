//URI 1595 Hmm run or walk, that's the question
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iomanip>
using namespace std;

bool desc(double lhs, double rhs) {
	return rhs < lhs;
}

int main() {
	int T;
	scanf("%d",&T);
	for (int z=0; z<T; z++) {
		int S, C;
		double R;
		cin >> S >> C >> R;

		double total_time = 0;
		double arr[S];

		for (int i=0; i<S; i++) {
			cin >> arr[i];
		}
		sort(arr, arr+S);
		// for (int i=0; i<S; i++) {
		// 	cout << arr[i] << endl;
		// }
		for (int i=0; i<C; i++) {
			arr[i] += R;
		}
		for (int i=0; i<S; i++) {
			total_time += (1.0 / arr[i]);
		}
		
		cout << fixed << setprecision(2);
		cout << total_time << endl;
	}
	return 0;
}