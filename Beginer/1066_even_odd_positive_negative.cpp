//URI 1066 Even, Odd, Positive and Negative
#include <cstdio>
int main() {
    int even=0,odd=0,pos=0,neg=0;
    int a;
    for (int i=1; i<=5; i++) {
        scanf("%d",&a);
        if (a%2==0) {
           even++;
        }
        else odd++;
         
        if (a>0) {
           pos++;
        }
        else if (a<0) {
             neg++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}
