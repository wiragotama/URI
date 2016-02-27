//URI 1029 fibonacci how many calls?
#include <iostream>
#include <cstdio>
using namespace std;
 
unsigned long calls;
unsigned long total;
unsigned long p[40],c[40];
 
void fibo(int x) {
         if ((x==1)) { 
             total=total+1; 
             calls++;
         }
         else if (x==0) { 
              total=total+0;
              calls++;
         }
         else {
              total=total+p[x-1]+p[x-2];
              calls=calls+2+c[x-1]+c[x-2];
         }
}
 
int main() {
    int t,x;
    c[1]=0; p[1]=1;
    c[0]=0; p[0]=0;
    c[2]=2; p[2]=1;
    for (int i=3; i<=40; i++) {
        calls=0;
        total=0;
        fibo(i);
        p[i]=total;
        c[i]=calls;
    }
    scanf("%d",&t);
    for (int i=1; i<=t; i++) {
        scanf("%d",&x);
        printf("fib(%d) = %ld calls = %ld\n",x,c[x],p[x]);
    }
    return 0;
}
