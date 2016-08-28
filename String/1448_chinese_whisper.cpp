//URI 1448 chinese whisper
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	getchar();
	for (int i=0; i<N; i++) {
		string str1, str2, str3;
		getline(cin, str1);
		getline(cin, str2);
		getline(cin, str3);
		
		int c2=0, c3=0;
		int first=0;
		for (int j=0; j<str1.length(); j++) {
			if (str1[j] == str2[j]) {
				if (str1[j]!=str3[j] && first==0) {
					first = 1;
				}
				c2++;
			}
			if (str1[j] == str3[j]) {
				if (str1[j]!=str2[j] && first==0) {
					first = 2;
				}
				c3++;
			}
		}
		
		cout << "Instancia " << i+1 << endl;
		if (c2==c3) {
			if (first==0)
				cout << "empate" << endl;
			else if (first==1)
				cout << "time 1" << endl;
			else
				cout << "time 2" << endl;
		}
		else if (c2>c3)
			cout << "time 1" << endl;
		else cout << "time 2" << endl;
		cout << endl;
	}
	return 0;
}