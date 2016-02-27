//URI 1115 quadrant
#include <cstdio>
int main() {
    int x=1,y=1;
    do {
       scanf("%d%d",&x,&y);
       if ((x>0) && (y>0)) {
          printf("primeiro\n");
       }
       else if ((x>0) && (y<0)) {
          printf("quarto\n");
       }
       else if ((x<0) && (y<0)) {
          printf("terceiro\n");
       }
       else if ((x<0) && (y>0)) {
          printf("segundo\n");
       }
    } while ((x!=0) && (y!=0));
    return 0;
}
