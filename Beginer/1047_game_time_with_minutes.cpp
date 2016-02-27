//URI 1047 game time with minutes
#include <cstdio>
int main() {
    int t1,m1,t2,m2;
    scanf("%d%d%d%d",&t1,&m1,&t2,&m2);
    if (m1>m2) {
       m2=m2+60;
       t1=t1+1;
    }
    if (t1>t2) {
       t2=t2+24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t2-t1,m2-m1);
    return 0;
}
