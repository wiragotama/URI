//URI 1546 feedback
#include <iostream>
using namespace std;

int main() {
	int t, n, a;
	
	cin >> t;
	for (int i=1; i<=t; i++) {
		cin >> n;
		for (int j=1; j<=n; j++) {
			cin >> a;
			switch(a) {
				case 1 : {
					cout << "Rolien" << endl;
					break;
				}
				case 2 : {
					cout << "Naej" << endl;
					break;
				}
				case 3 : {
					cout << "Elehcim" << endl;
					break;
				}
				case 4 : {
					cout << "Odranoel" << endl;
					break;
				}
			}
		}
	}
	return 0;
}
