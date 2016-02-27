//URI 1097 Sequential IJ 3
#include <cstdio>
int main() {
    int i,j,o,awal;
    awal=7;
    o=0;
    i=1;
    j=awal;
    while (i<=9) {
         printf("I=%d J=%d\n",i,j);
         o++;
         j--;
         if (o==3) {
            i=i+2;
            o=0;
            awal+=2;
            j=awal;
         }
    }
    return 0;
}
