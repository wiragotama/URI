#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double price[5] = {1.50, 2.50, 3.50, 4.50, 5.50};
	int n;
	scanf("%d",&n);
	double totalPrice = 0;
	for (int i=0; i<n; i++) {
		int id, count;
		scanf("%d %d",&id, &count);
		totalPrice+= price[(id%10)-1]*(double)count;
	}
	printf("%.2lf\n",totalPrice);
	return 0;
}