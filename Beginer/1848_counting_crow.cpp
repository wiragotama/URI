#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string str;
	int sum = 0;
	while (getline(cin, str)) {
		if (str.length()>5) {
			printf("%d\n",sum);
			sum = 0;
		}
		else {
			int angka = 1;
			int res = 0;
			//cout << str << endl;
			for (int i=2; i>=0; i--) {
				if (str[i]=='*') {
					res += angka;
				}
				angka *= 2;
			}
			sum += res;
		}
	}
	return 0;
}