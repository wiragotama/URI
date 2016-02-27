//uri 1030 Flavious Josephus legend
#include <iostream>
#include <cstdio>
#include <list>
using namespace std;

int i, t, a, b;

int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the
       recursive call josephus(n - 1, k) considers the original position 
       k%n + 1 as position 1 */
    return (josephus(n - 1, k) + k-1) % n + 1;
}

int main() {
	scanf("%d",&t);
	for (i=1; i<=t; i++) {
		scanf("%d %d",&a,&b);
		printf("Case %d: %d\n",i,josephus(a,b));
	}
	return 0;
}
