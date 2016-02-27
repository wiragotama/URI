//URI 1116 Dividing X by Y
#include <cstdio>
int main() {
    int i,n,a,b;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        scanf("%d%d",&a,&b);
        if (b==0) {
           printf("divisao impossivel\n");
        }
        else {
             float hasil=float(a)/float(b);
             printf("%.1f\n",hasil);
        }
    }
}
