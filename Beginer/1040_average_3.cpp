//URI 1040 average 3
#include <cstdio>
int main() {
    float a,b,c,d,e,mean,exam;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    scanf("%f",&e);
    mean=(0.2*a)+(0.3*b)+(0.4*c)+(0.1*d);
    exam=(mean+e)/2.0;
    printf("Media: %.1f\n",mean);
    if (mean>=7.0) {
       printf("Aluno aprovado.\n");
    }
    else if (mean<5.0) {
         printf("Aluno reprovado.\n");
    }
    else {
         printf("Aluno em exame.\n");
    }
    printf("Nota do exame: %.1f\n",e);
    if (exam>=5.0) {
       printf("Aluno aprovado.\n");
    }
    else printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n",exam);
    return 0;
}
