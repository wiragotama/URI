//URI 1133 Rest of a Division
#include <cstdio>
int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    if (x>y) {
       int temp=x;
       x=y;
       y=temp;
    } 
    for (int i=x+1; i<y; i++) {
            int p=i%5;
            if ((p==2) || (p==3)) {
               printf("%d\n",i);
            }
        }
    return 0;
}
