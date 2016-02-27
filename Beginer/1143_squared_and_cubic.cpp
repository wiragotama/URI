//URI 1143 Squared and Cubic
#include <cstdio>
int main() {
    int x;
    scanf("%d",&x);
    for (int i=1; i<=x; i++) {
        printf("%d %ld %ld\n",i,i*i,i*i*i);
    }
    return 0;
}
