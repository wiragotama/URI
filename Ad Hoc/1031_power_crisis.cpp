//URI 1031 power crisis
#include <iostream>
#include <cstdio>
#include <list>
using namespace std;

int main() {
	int n;
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			int simpan;
			int x = 1;
			
			while (1) {
				list<int> arr;
				
				for (int i=0; i<n; i++) {
					arr.push_back(i+1);
				}
				
				list<int>::iterator it = arr.begin();
				int p = 1;
				it = arr.erase(it);
				
				while (arr.size()>1) {
					if (p%x==0) {
						it = arr.erase(it);
					}
					else ++it;
					
					if (it == arr.end() ) it = arr.begin();
					++p;
				}
				
				
				if (*arr.begin()==13) {
					break;
				}
				else ++x;
			}
			printf("%d\n",x);
		}
	}
	return 0;
}
