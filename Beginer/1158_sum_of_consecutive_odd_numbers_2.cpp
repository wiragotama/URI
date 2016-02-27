//URI 1158 Sum of Consecutive Odd Numbers III
#include <cstdio>
int main() {
    long int sum;
    long int t,jum,j,a,b;
    scanf("%ld",&t);
    for (int i=1; i<=t; i++) {
        scanf("%ld%ld",&a,&b);
        j=a;
        if (j%2==0) 
           j=j+1;
        sum=0;
        for (jum=1; jum<=b; jum++) {
            sum=sum+j;
            j=j+2;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
