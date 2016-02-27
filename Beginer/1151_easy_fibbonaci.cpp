//URI 1151 easy fibbonaci
#include <cstdio>
int main() {
    int a,x=0,n=0,y=1;
    scanf("%d",&a);
    for (int i=1; i<=a; i++) {
        printf("%d",n);
        if (i<a) printf(" ");
        n=n+y;
        y=x;
        x=n;
    }
    printf("\n");
    getchar();
    getchar();
    return 0;
}
