//URI 1101 Sequence of Numbers and Sum
#include <cstdio>
int main() {
    int a,b,sum,mulai,akhir;
    do {
          scanf("%d%d",&a,&b);
          if ((a>0) && (b>0)) {
             sum=0;
             if (a<=b) {
                mulai=a;
                akhir=b;
             }
             else {
                  mulai=b;
                  akhir=a;
             }
             for (int i=mulai; i<=akhir; i++) {
                 printf("%d ",i);
                 sum=sum+i;
             }
             printf("Sum=%d\n",sum);
          }
    } while ((a>0) && (b>0));
    return 0;
}
