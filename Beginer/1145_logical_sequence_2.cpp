//URI 1145 logical sequence 2
#include <cstdio>
int main() {
    long a,b;
    scanf("%ld%ld",&a,&b);
    long i=1;
    long p;
    while (i<=b) {
          p=i;
          while ((p<i+a) && (p<=b)) {
              printf("%ld",p);
              if (p<i+a-1) 
                 printf(" ");
              p++; 
          }      
          printf("\n");
          i=i+a;
    }
    return 0;
}
