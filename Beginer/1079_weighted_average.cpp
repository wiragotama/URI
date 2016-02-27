//URI 1079 weighted average
#include <cstdio>
int main() {
    int t;
    float a,b,c,hasil;
    scanf("%d",&t);
    for (int i=1; i<=t; i++) {
        scanf("%f%f%f",&a,&b,&c);
        hasil=(2.0/10.0)*a + (3.0/10.0)*b + (5.0/10.0)*c;
        printf("%.1f\n",hasil);
    }
    return 0;
}
