//URI 1075 Remaining 2
#include <cstdio>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=1; i<=10000; i++) {
        if (i%a==2) {
           printf("%d\n",i);
        }
    }
    return 0;
}
