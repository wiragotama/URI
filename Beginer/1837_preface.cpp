#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int a, b;
 	scanf("%d %d",&a, &b);
	bool aNeg = a<0 ? true : false;
	bool bNeg = b<0 ? true : false;

	int quotient;
	int reminder;

	if (!aNeg && !bNeg) {
		quotient = a / b;
		reminder = a % b;
	}
	else if (aNeg && !bNeg) {
		quotient = abs(a) / b;
		quotient *= -1;
		reminder = a - (b*quotient);
		while (reminder<0) {
			quotient -= 1;
			reminder = a - (b*quotient);
		}
	}
	else if (!aNeg && bNeg) {
		quotient = a / abs(b);
		reminder = a % abs(b);
		quotient *= -1;
	}
	else { //all negative
		quotient = abs(a) / abs(b);
		reminder = (a - b*quotient);
		while (reminder < 0) {
			quotient++;
			reminder = (a - b*quotient);
		}
	}

	printf("%d %d\n",quotient, reminder);
	return 0;
}