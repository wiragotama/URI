//URI 1110 Throwing Cards Away
#include <cstdio>
#include <iostream>
using namespace std;
 
int stack[210];
int n,top,bottom;
 
void initial() {
     int isi=n;
     for (int i=0; i<=149; i++) {
         stack[i]=0;
     }
     for (int i=105; i<=105+n-1; i++) {
         stack[i]=isi;
         isi--;
     }
}
int main() {
    do {
        scanf("%d",&n);
        if (n!=0) {
           initial();
           bottom=105;
           top=bottom+n-1;
           if (n>1) 
              printf("Discarded cards: ");
           while (n>1) {
                 printf("%d",stack[top]);
                 if (n>2) 
                    printf(", ");
                 top--;
                 bottom--;
                 stack[bottom]=stack[top];
                 top--;
                 n--;
           }
           printf("\n");
           printf("Remaining card: %d\n",stack[top]);
        }
    } while (n!=0);
    return 0;
}
