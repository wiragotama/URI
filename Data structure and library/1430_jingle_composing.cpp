//URI 1430 jingle composing
#include <iostream>
#include <cstdio>
using namespace std;

double nilai(char& x);

int main() {
	string str;
	int len;
	while (cin>>str) {
		if (str!="*") {
			len = str.length();
			int i = 0;
			double simpan = 0;
			int jumlah = 0;
			while (i < len) {
				if (str[i]=='/') {
					if (simpan==1) {
						jumlah++;
					}
					simpan=0;
				}
				else {
					simpan += nilai(str[i]);
				}
				i++;
			}
			printf("%d\n",jumlah);
		}
	}
	return 0;
}

double nilai(char& x) {
	switch (x) {
		case 'W' : {
			return 1;
		}
		case 'H' : {
			return 1.0/2.0;
		}
		case 'Q' : {
			return 1.0/4.0;
		}
		case 'E' : {
			return 1.0/8.0;
		}
		case 'S' : {
			return 1.0/16.0;
		}
		case 'T' : {
			return 1.0/32.0;
		}
		case 'X' : {
			return 1.0/64.0;
		}
	}
}
