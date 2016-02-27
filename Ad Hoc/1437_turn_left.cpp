//1437 Turn Left
#include <iostream>
#include <cstdio>
using namespace std;

char turn(char start, char command) {
	if (start=='N') {
		if (command=='E') {
			return 'O';
		}
		else {
			return 'L';
		}
	}
	else if (start=='L') {
		if (command=='E') {
			return 'N';
		}
		else {
			return 'S';
		}
	}
	else if (start=='S') {
		if (command=='E') {
			return 'L';
		}
		else {
			return 'O';
		}
	}
	else if (start=='O') {
		if (command=='E') {
			return 'S';
		}
		else {
			return 'N';
		}
	}
}

int main() {
	int n;
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			getchar();
			string str;
			char start='N';
			getline(cin,str);
			for (int i=0; i<n; i++) {
				start = turn(start,str[i]);
			}
			printf("%c\n",start);
		}
	}
	return 0;
}
