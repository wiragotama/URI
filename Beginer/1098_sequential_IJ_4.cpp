//URI 1097 Sequential IJ 3
#include <cstdio>
int main() {
    float i,j,o,awal;
    int count=0;
    awal=1;
    o=0;
    i=0;
    j=awal;
    while (i<=2.1) {
          if (count%5==0) {
             printf("I=%.0f J=%.0f\n",i,j);
          }
          else printf("I=%.1f J=%.1f\n",i,j);
         o++;
         j++;
         if (o==3) {
            i=i+0.2;
            o=0;
            awal+=0.2;
            j=awal;
            count++;
         }
    }
    return 0;
}
