//URI 1179 array fill 4
#include <cstdio>
int par[5],impar[5];
 
void print_par(int x) {
     for (int i=0; i<=x; i++) {
         printf("par[%d] = %d\n",i,par[i]);
     }
}
 
void print_impar(int x) {
     for (int i=0; i<=x; i++) {
         printf("impar[%d] = %d\n",i,impar[i]);
     }
}
 
int main() {
    int q1=0,q2=0,a;
    for (int j=1; j<=15; j++) {
        scanf("%d",&a);
        if (a%2==0) {
           par[q1]=a;
           q1++;
           if (q1==5) {
              print_par(4);
              q1=0;
           }
        }
        else {
             impar[q2]=a;
             q2++;
             if (q2==5) {
                print_impar(4);
                q2=0;
             }
        }
    }
    if (q2<5) {
       print_impar(q2-1);
    }
    if (q1<5) {
       print_par(q1-1);
    }
    return 0;
}
