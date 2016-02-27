//URi 1060 positive numbers
#include <cstdio>
int main() {
    float a;
    int pos=0;
    for (int i=1; i<=6; i++) {
        scanf("%f",&a);
        if (a>0) {
           pos++;
        }
    }
    printf("%d valores positivos\n",pos);
    return 0;
}
