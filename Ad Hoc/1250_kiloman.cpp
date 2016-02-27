//URI 1250 KiloMan
#include <cstdio>
int main() {
    int arr[51];
    int hit,t,n;
    char temp;
     
    scanf("%d",&t);
    for (int i=1; i<=t; i++) {
        scanf("%d",&n);
        hit=0;
        for (int j=0; j<n; j++) {
            scanf("%d",&arr[j]);
        }
        scanf("%c",&temp);
        for (int j=0; j<n; j++) {
            scanf("%c",&temp);
            //printf("%c %d\n",temp,arr[j]);
            if ((arr[j]<=2) && (temp=='S')) {
               hit++;
            }
            else if ((arr[j]>2) && (temp=='J')) {
                 hit++;
            }
        }
        printf("%d\n",hit);
    }
    return 0;
}
