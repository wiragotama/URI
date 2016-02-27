//URI 1150 exceeding Z
#include <cstdio>
int main() {
    int x,z,sum,tot;
    scanf("%d%d",&x,&z);
    while (z<x) {
          scanf("%d",&z);
    }
    sum=x;
    tot=1;
    x++;
    while (sum<z) {
          sum=sum+x;
          tot++;
          x++;
    }
    printf("%d\n",tot);
    return 0;
}
