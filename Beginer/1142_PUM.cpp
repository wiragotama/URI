//URI 1142 PUM
#include <cstdio>
int main() {
    int a;
    scanf("%d",&a);
    int start=1;
    for (int i=1; i<=a; i++) {
        for (int j=start; j<=start+2; j++) {
            printf("%d ",j);
        }
        printf("PUM\n");
        start=start+4;
    }
    //getchar();
    //getchar();
    return 0;
}
