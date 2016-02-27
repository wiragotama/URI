//URI 1099 Sum of Consecutive Odd Numbers II
#include <cstdio>
int main() {
    int n,a,b;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d%d",&a,&b);
        int sum=0;
        if (a<b) 
            for (int j=a+1; j<b; j++) {
                if (j%2==1) {
                   sum=sum+j;
                }
            }
        else
             for (int j=a-1; j>b; j--) {
                if (j%2==1) {
                   sum=sum+j;
                }
            }
        printf("%d\n",sum);
    }
    return 0;
}
