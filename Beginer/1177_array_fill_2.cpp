//URI 1177 array fill 2
#include <cstdio>
int main() {
    int a,arr[1000];
    scanf("%d",&a);
    for (int i=0; i<=999; i++) {
        arr[i]=i%a;
        printf("N[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
