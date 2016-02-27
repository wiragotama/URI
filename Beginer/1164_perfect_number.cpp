//URI 1164 Perfect Number
#include <cstdio>
 
int main() {
    int i,n;
    long number,j,c,sum;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        scanf("%ld",&number);
        c=number;
        sum=0;
        for (j=1; j<c; j++) {
            if (number%j==0) {
               sum=sum+j;
            }
        }
        if (sum==number) {
           printf("%ld eh perfeito\n",number);
        }
        else printf("%ld nao eh perfeito\n",number);
    }
    return 0;
}
