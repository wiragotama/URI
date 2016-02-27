#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	string name;
	int force;
	for (int i=0; i<t; i++) {
		cin >> name >> force;
		name=="Thor" ? printf("Y\n") : printf("N\n");
	}
	return 0;
}