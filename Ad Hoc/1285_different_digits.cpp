//URI 1285 different digits
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	int a, b, d;
	int	count;
	vector<int> list;
	int		DP[5001];
	
	DP[0] = 0;
	for (int i=1; i<=5000; i++) {
		
		vector<int> digits;
		bool		stop = false;
		int 		x = i;
			
		while (x>0 && !stop) {
			d = x%10;
				
			if (digits.size()==0) {
				digits.push_back(d);
			}
			else if ( find(digits.begin(), digits.end(), d)!=digits.end() ) {
				stop = true;
			}
			else {
				digits.push_back(d);
			}
			x/=10;
		}
		digits.clear();
		
		if (!stop) {
			list.push_back(i);
			DP[i] = DP[i-1] + 1;
		}
		else DP[i] = DP[i-1];
	}
	
	while (scanf("%d%d",&a,&b)==2) {
		printf("%d\n", DP[b]-DP[a-1]);
	}
	return 0;
}
