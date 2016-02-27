//URI 1080 highest position
#include <cstdio>
int main() {
    long int pos=0,a,max=-1;
    for (int i=1; i<=100; i++) {
        scanf("%d",&a);
        if (a>=max) { 
           max=a;
           pos=i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",pos);
    return 0;
}
