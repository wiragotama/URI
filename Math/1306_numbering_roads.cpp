//URI 1306 numbering roads
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int road, number, idx=1;;
	while (scanf("%d %d",&road, &number)==2) {
		if (!(road==0 && number==0)) {
			double needs = (road-number)/(double)number;
			if (needs>26.0) 
			{
				printf("Case %d: impossible\n",idx);
			}
			else 
				printf("Case %d: %d\n",idx, (int)ceil(needs));
			idx++;
		}
	}
	return 0;
}