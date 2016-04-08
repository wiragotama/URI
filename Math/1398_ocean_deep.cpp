//URI 1398 ocean deep, make it shallow
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	string binary="";
	string str;
	int prime = 131071;
	while (getline(cin, str))
	{
		int len = str.length();
		if (str[len-1]=='#') {
			binary += str;
			int x = 0;
			len = binary.length();
			for (int i=len-2; i>=0; i--)
			{
				x = (x*2 + (binary[i]-'0')) % prime;
			}
			if (x==0)
				printf("YES\n");
			else
				printf("NO\n");
			binary = "";
		}
		else binary += str;
	}
	return 0;
}