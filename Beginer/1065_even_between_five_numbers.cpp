//URI 1065 even between five numbers
#include <cstdio>
int main() {
    int a,hoho=0;
    for (int i=1; i<=5; i++) {
        scanf("%d",&a);
        if (a%2==0) {
           hoho++;
        }
    }
    printf("%d valores pares\n",hoho);
    return 0;
}
