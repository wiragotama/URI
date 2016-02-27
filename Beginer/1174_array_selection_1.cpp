//URI 1174 Array Selection I
#include <cstdio>
int main() {
    float a[100];
    for (int i=0; i<=99; i++) {
        scanf("%f",&a[i]);
        if (a[i]<=10.0) {
           int result = static_cast<int>(a[i]*10)%10;
           if (result==0) {
              printf("A[%d] = %d\n",i,int(a[i]));
           } else
           printf("A[%d] = %.1f\n",i,a[i]);
        }
    }
    return 0;
}
