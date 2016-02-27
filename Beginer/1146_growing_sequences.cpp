//URI 1146 Growing Sequences
#include <cstdio>
int main() {
    int i,a=1;
    while (a!=0) {
          scanf("%d",&a);
          if (a!=0) {
             for (i=1; i<=a; i++) {
                 printf("%d",i);
                 if (i<a) printf(" ");
             }
             printf("\n");
          }
    }
    return 0;
}
