//URI 1175 Array change I
#include <cstdio>
int main() {
    int N[20];
    for (int i=0; i<=19; i++) {
        scanf("%d",&N[i]);
    }
    int temp;
    for (int i=0; i<=9; i++) {
        temp=N[i];
        N[i]=N[19-i];
        N[19-i]=temp;
    }
    for (int i=0; i<=19; i++) {
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}
