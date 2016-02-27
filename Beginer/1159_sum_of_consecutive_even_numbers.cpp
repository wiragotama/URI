//URI 1159 Sum of Consecutive Even Numbers
#include <cstdio>
int main() {
    int i,a=1,sum=0;
    while (a!=0) {
          scanf("%d",&a);
          if (a!=0) {
             sum=0;
             i=1;
             while (i<=5) {
                     if (a%2==0) {
                        sum=sum+a;
                        i++;
                     }      
                     a++;     
             }
             printf("%d\n",sum);
          }
    }
    return 0;
}
