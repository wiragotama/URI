//URI 1072 interval 2
#include <cstdio>
int main() {
    int n,in=0,out=0;
    long int x;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%ld",&x);
        if ((10<=x) && (x<=20)) {
           in++;
        }
        else out++;
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    getchar();
    getchar();
    return 0;
}
