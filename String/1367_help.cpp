//URI 1327 help
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main () {
	int		n, time;
	string	verdict;
	char	prob;
	
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			getchar();
			int	wrong[26];
			int correct = 0;
			int totalTime = 0;
			
			for (int i=0; i<26; i++)
				wrong[i] = 0;
				
			for (int i=0; i<n; i++) {
				cin >> prob >> time >> verdict;
				if (verdict=="incorrect") {
					wrong[prob-'A']++;
				}
				else { //verdict == 'correct'
					correct++;
					totalTime += (time+(wrong[prob-'A']*20));
				}
			}
			
			printf("%d %d\n",correct,totalTime);
		}
	}
	return 0;
}
