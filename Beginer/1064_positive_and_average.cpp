//URI 1064 positives and average
#include <cstdio>
int main() {
    float p,ave=0;
    int pos=0;
    for (int i=1; i<=6; i++) {
        scanf("%f",&p);
          if (p>0) {
             pos++;
             ave=ave+p;
          }
    }
    ave=ave/float(pos);
    printf("%d valores positivos\n",pos);
    printf("%.1f\n",ave);
    return 0;
}
