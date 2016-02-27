//URI 1117 score validation
#include <cstdio>
int main() {
    int tot=0;
    float score,sum=0.0;
    while (tot<2) {
          scanf("%f",&score);
          if ((0.0<=score) && (score<=10.0)) {
             sum=sum+score;
             tot++;
          }
          else printf("nota invalida\n");
    }
    printf("media = %.2f\n",sum/2.0);
    return 0;
}
