//URI 1429 factorial again
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int fact[10];
	fact[0] = 1;
	for (int i=1; i<10; i++) 
	{
		fact[i] = i * fact[i-1];
	}
	string str;
	while (getline(cin,str))
	{
		if (str!="0") {
			int len = str.length();
			int idx = len;
			int result=0;
			for (int i=0; i<len; i++) {
				result += (fact[idx]*(str[i]-'0'));
				idx--;
			}
			printf("%d\n",result);
		}
	}
	return 0;
}