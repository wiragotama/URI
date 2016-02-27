//URI 1078 multiplication table
#include <cstdio>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1; i<=10; i++) {
        printf("%d x %d = %ld\n",i,a,i*a);
    }
    return 0;
}
