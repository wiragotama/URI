//URI 1051 taxes
#include <cstdio>
int main() {
    float number,tax,pengali;
    scanf("%f",&number);
    tax=0;
    if (number>=2000.01) {
       pengali=number-2000.00;
       if (pengali>1000.00) 
          pengali=1000.00;
         tax=tax+8.0/100.0*pengali;
    }
    if (number>=3000.01) {
         pengali=number-3000.00;
         if (pengali>1500.00)
            pengali=1500.00;
         tax=tax+18.00/100.00*pengali;
    }
    if (number>=4500.01) {
         pengali=number-4500.00;
         tax=tax+28.00/100.00*pengali;
    }
    if (tax>2000.00) {
       printf("Isento\n");
    }
    else printf("R$ %.2lf\n",tax);
    return 0;
}
