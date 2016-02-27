//URI 1071 Sum of Consecutive Odd Numbers I
#include <cstdio>
int main() {
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    if (a>=b) {
       for (int i=a-1; i>0; i--) {
           if (i%2==1) {
              sum=sum+i;
           }
       }
       for (int i=1; i<(b*-1); i++) {
           if (i%2==1) {
                sum=sum-i;
           }
       }
    }
    else {
         for (int i=a-1; i<b; i++) {
             if (i%2==1) {
                sum=sum+i;
             }
         }
    }
    printf("%d\n",sum);
    getchar();
    getchar();
    return 0;
}
