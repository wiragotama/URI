//URI 1070 Six Odd Numbers
#include <cstdio>
int main() {
    int a,i,p;
    scanf("%d",&a);
    if (a%2==0) {
       a+=1;
    }
    i=a;
    p=0;
    while (p<6) {
          p++;
          printf("%d\n",i);
          i+=2;
    }
    getchar();
    getchar();
    return 0;
}
