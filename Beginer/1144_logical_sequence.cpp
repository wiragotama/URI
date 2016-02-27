//URI 1144 logical sequence
#include <cstdio>
int main() {
    int x;
    scanf("%d",&x);
    for (int i=1; i<=x; i++) {
        printf("%d %ld %ld\n",i,i*i,i*i*i);
        printf("%d %ld %ld\n",i,i*i+1,i*i*i+1);
    }
    return 0;
}
