//URI 1045 triangle types
#include <cstdio>
#include <math.h>
int main() {
    float a,b,c;
    float temp,area;
    scanf("%f%f%f",&a,&b,&c);
     
    if (a>b+c) {
         printf("NAO FORMA TRIANGULO\n");
    }
    if (a*a==b*b+c*c) {
         printf("TRIANGULO RETANGULO\n");
    }
    if (a*a>b*b+c*c) {
         printf("TRIANGULO OBTUSANGULO\n");
    }
    if (a*a<b*b+c*c) {
         printf("TRIANGULO ACUTANGULO\n");
    }
    if ((a==b) && (b==c)) {
       printf("TRIANGULO EQUILATERO\n");
    }
    if ((a==b) && (b!=c) || ((b==c) && (a!=b)) || ((a==c) && (b!=a))) {
         printf("TRIANGULO ISOSCELES\n");
    }
    //getchar();
    //getchar();
    return 0;
}
