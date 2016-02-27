//URI 1180 Lowest Number and Position
#include <cstdio>
int main() {
    int min=32679,pos,n,a;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&a);
        if (a<min) {
           min=a;
           pos=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos-1);
    return 0;
}
