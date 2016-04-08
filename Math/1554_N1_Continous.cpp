//URI 1554 N1 continous
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	int t, n, pos_x, pos_y, a, b, select;
	scanf("%d",&t);

	for (int x=0; x<t; x++) {
		scanf("%d",&n);
		scanf("%d %d",&pos_x, &pos_y);

		double minimum = -1;
		for (int i=0; i<n; i++) 
		{
			scanf("%d %d",&a,&b);
			double x1 = abs(pos_x-a);
			double y1 = abs(pos_y-b);
			double dist = sqrt((x1*x1)+(y1*y1));
			if (minimum==-1 || (minimum-dist > 0.01)) {
				minimum = dist;
				select = i+1;
			}
			//cout << dist << endl;
		}
		//cout << "------" << endl;
		printf("%d\n",select);
	}
	return 0;
}