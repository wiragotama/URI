//URI 1149 Summing Consecutive Integers
#include <cstdio>
int main() {
    int a,n,sum=0;
    scanf("%d",&a);
    scanf("%d",&n);
    while (n<=0) {
          scanf("%d",&n);
    }
    for (int i=a; i<a+n; i++) {
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
