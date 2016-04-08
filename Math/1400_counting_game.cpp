//URI 1400 counting game
#include <iostream>
#include <cstdio>
using namespace std;

bool checkNum(int num)
{
	if (num%7==0) {
		return true;
	}
	else 
	{
		bool stop = false;
		while (num > 0 && !stop) {
			if (num%10==7) {
				stop = true;
			}
			else num/=10;
		}
		return stop;
	}
}

int main()
{
	int n,m,k;
	while (scanf("%d %d %d",&n,&m,&k)==3)
	{
		if (!(n==0 && m==0 && k==0)) 
		{
			int currentClap = 0;
			int prev = 0;
			int currentNumber = 0;
			int person=0;

			while (currentClap<k) {
				if (prev==0) {
					person++;
					if (person==n) prev = 1;
				}
				else if (prev==1) {
					person--;
					if (person==1) prev = 0;
				}
				currentNumber++;
				if (checkNum(currentNumber) && person==m) {
					currentClap++;
				}
			}
			//currentClap == k;
			printf("%d\n",currentNumber);
		}
	}
	return 0;
}