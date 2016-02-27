//URI 1041 coordinates of a point
#include <cstdio>
int main() {
    float x,y;
    scanf("%f%f",&x,&y);
    if ((x==0.0) and (y==0.0)) {
       printf("Origem\n");
    }
    else {
         if (y==0.0) {
            printf("Eixo X\n");
         } 
         else {
              if (x==0.0) {
                 printf("Eixo Y\n");
              }
              else if ((y<0) and (x<0)) {
                   printf("Q3\n");
              }
              else if ((y<0) and (x>0)) {
                   printf("Q4\n");
              }
              else if ((y>0) and (x<0)) {
                   printf("Q2\n");
              }
              else {
                   printf("Q1\n");
              }
         }
    }
    return 0;
}
