//URI 1607 advancing letters
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		string a,b;
		cin >> a >> b;
		int count = 0;
		for (int j=0; j<a.length(); j++) {
			int x = b[j] - a[j];
			if (x<0) 
				x = 26 + x;
			count += x;
		}
		cout << count << endl;
	}
	return 0;
}