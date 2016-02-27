#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a;
	int correct = 0;
	scanf("%d",&a);
	for (int i=0; i<5; i++) {
		int b;
		scanf("%d",&b);
		if (b==a) correct++;
	}
	cout << correct << endl;
	return 0;
}