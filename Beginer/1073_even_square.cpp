//URI 1073 even square
#include <cstdio>
int main() {
    long a;
    scanf("%ld",&a);
    long i=2;
    while (i<=a) {
          printf("%ld^2 = %ld\n",i,i*i);
          i=i+2;
    }
    getchar();
    getchar();
    return 0;
}
