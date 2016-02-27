#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	
	string name1, choise1, name2, choise2;
	int a, b;
	for (int i=0; i<t; i++) {
		cin >> name1 >> choise1 >> name2 >> choise2;
		cin >> a >> b;
		int sum = a+b;
		if (sum%2==0) {
			if (choise1=="PAR") {
				cout << name1 << endl;
			}
			else cout << name2 << endl;
		}
		else {
			if (choise1=="IMPAR") {
				cout << name1 << endl;
			}
			else cout << name2 << endl;
		}
	}
	return 0;
}