//URI 1547 guess what
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n, s, number, p, simpan;
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> s >> number;
		
		int min = -1;
		
		for (int j=0; j<s; j++) {
			cin >> p;
			if (j==0 || (abs(p-number)<min)) {
				simpan = j;		
				min = abs(p-number);
			}	
		}
		
		cout << simpan+1 << endl;
	}
}
