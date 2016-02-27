//URI 1173 array fill 1
#include <cstdio>
int main() {
    long int n[10];
    long int a;
    scanf("%d",&a);
    for (int i=0; i<10; i++) {
        n[i]=a;
        printf("N[%d] = %d\n",i,n[i]);
        a=a*2;
    }
    return 0;
}
