//URI 1037 interval
#include <cstdio>
 
int main() {
    float f;
    scanf("%f",&f);
    if ((0<=f) && (f<=25)) {
       printf("Intervalo (0,25]\n");
    }
    else if ((25<f) && (f<=50)) {
          printf("Intervalo (25,50]\n");
    }
    else if ((50<f) && (f<=75)) {
          printf("Intervalo (50,75]\n");
    }
    else if ((75<f) && (f<=100)) {
          printf("Intervalo (75,100]\n");
    }
    else printf("Fora de intervalo\n");
    return 0;
}
