//URI 1132 Multiples of 13
#include <cstdio>
int main() {
    int a,b;
    long sum=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if (b>a)
        for (int i=a; i<=b; i++) {
            if (i%13!=0)
               sum=sum+i; 
        }
    else
         for (int i=b; i<=a; i++) {
            if (i%13!=0)
               sum=sum+i; 
        }
    printf("%ld\n",sum);
    return 0;
}
