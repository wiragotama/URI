//URI 1307 all you need is love
#include <iostream>
#include <cstdio>
using namespace std;

int strToBin(string str)
{
	int len = str.length();
	int pangkat=1;
	int result=0;
	for (int i=len-1; i>=0; i--) 
	{
		if (str[i]=='1') {
			result += pangkat;
		}
		pangkat *= 2;
	}
	return result;
}

int GCD(int a, int b)
{
	while (a!=0 && b!=0) 
	{
		if (a>b) 
			a = a % b;
		else
			b = b % a;
	}
	if (a==0) return b;
	else return a;
}

int main()
{
	int t;
	scanf("%d",&t);
	string str1, str2;
	getchar();
	for (int i=0; i<t; i++)
	{
		getline(cin, str1);
		getline(cin, str2);
		int val1 = strToBin(str1);
		int val2 = strToBin(str2);
		if (GCD(val1, val2)!=1) 
		{
			printf("Pair #%d: All you need is love!\n", i+1);
		}
		else
			printf("Pair #%d: Love is not all you need!\n",i+1);
	}
	return 0;
}