//URI 1154 ages
#include <cstdio>
int main() {
    int a;
    float hasil;
    long jum=0,sum=0;
    a=1;
    while (a>=0) {
          scanf("%d",&a);
          if (a>=0) {
             jum++;
             sum=sum+a;
          }
    }
    //printf("%ld %ld\n",sum,jum);
    hasil=float(sum)/float(jum);
    printf("%.2f\n",hasil);
    return 0;
}
