//URi 1134 Type of Fuel
#include <cstdio>
int main() {
    int a=1,al=0,gas=0,di=0;
    while (a!=4) {
          scanf("%d",&a);
          if (a!=4) {
             switch (a) {
                    case 1 : {
                         al++;
                         break;
                    }
                    case 2 : {
                         gas++;
                         break;
                    }
                    case 3 : {
                         di++;
                         break;
                    }
             }
          }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",di);
    return 0;
}
