//URI 1153 simple factorial
#include <cstdio>
 
int fak(int x) {
    if (x<=1) {
       return 1;
    }
    return x*fak(x-1);
}
 
int main() {
    int x;
    scanf("%d",&x);
    printf("%d\n",fak(x));
    return 0;
}
