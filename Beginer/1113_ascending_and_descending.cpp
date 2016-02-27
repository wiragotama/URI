//URI 1113 Ascending and Descending
#include <cstdio>
int main() {
    int x=1,y=0;
    do {
          scanf("%d%d",&x,&y);
          if (x!=y) {
             if (x>y) {
                printf("Decrescente\n");
             }
             else printf("Crescente\n");
          }
           
    } while (x!=y);
    return 0;
}
