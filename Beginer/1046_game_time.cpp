//URI 1046 game time
#include <cstdio>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if (b<a) {
       b=b+24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",b-a);
    //getchar();
    //getchar();
    return 0;
}
