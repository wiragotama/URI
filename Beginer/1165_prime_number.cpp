//URi 1165 prime number
#include <cstdio>
#include <math.h>
 
bool cek_prima(long x) {
     if (x<=1) {
        return false;
     }
     else if ((x==2) || (x==3)) {
          return true;
     }
     else {
          long p=long(sqrt(x)); 
          long j=2;
          while ((j<=p) && (x%j!=0)) {
                j++;
          }    
          if (j<=p) {
             return false;
          }
          else return true;
     }
}
 
int main() {
    long a,n;
    scanf("%ld",&n);
    for (int i=1; i<=n; i++) {
        scanf("%ld",&a);
        if (cek_prima(a)) {
           printf("%ld eh primo\n",a);
        }
        else printf("%ld nao eh primo\n",a);
    }
    return 0;
}
