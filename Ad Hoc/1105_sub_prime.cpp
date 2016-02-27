//URI 1105 sub prime South America/Brazil Regional Contest - ACM ICPC - 2009.
#include <cstdio>
long bank[21];
int d,c,v,b,n;
 
int main() {
    int i;
    bool ket;
    b=1;
    n=1;
    do {
          scanf("%d%d",&b,&n);
          if ((b!=0) and (n!=0)) {
          ket=false;
          for (i=1; i<=b; i++) {
              scanf("%d",&bank[i]);
          }
          for (i=1; i<=n; i++) {
              scanf("%d%d%d",&d,&c,&v);
              bank[c]=bank[c]+v;
              bank[d]=bank[d]-v;
          }
          for (i=1; i<=b; i++) {
              if (bank[i]<0) {
                 ket=true;
              }
          }
          if (ket) {
             printf("N\n");
          }
          else printf("S\n");
          }
    } while((b!=0) and (n!=0));
    return 0;
}
