//URi 1074 even or odd
#include <cstdio>
int main() {
    int n;
    long int x;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%ld",&x);
        if (x<0) {
           if (x%2==0) {
              printf("EVEN NEGATIVE\n");
           }
           else printf("ODD NEGATIVE\n");
        }
        else if (x==0) {
             printf("NULL\n");
        }
        else {
             if (x%2==0) {
              printf("EVEN POSITIVE\n");
           }
           else printf("ODD POSITIVE\n"); 
        }
    }
    return 0;
}
