//URI 1096 Sequential IJ 2
#include <cstdio>
int main() {
    int i,j,o;
    o=0;
    i=1;
    j=7;
    while (i<=9) {
         printf("I=%d J=%d\n",i,j);
         o++;
         j--;
         if (o==3) {
            i=i+2;
            o=0;
            j=7;
         }
    }
    return 0;
}
