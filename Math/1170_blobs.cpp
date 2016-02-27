//URI 1170 blobs
#include <cstdio>
int main() {
    int n;
    float food;
     
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        int days=0;
        scanf("%f",&food);
        while (food>1) {
              food=food/float(2);
              days++;
        }
        printf("%d dias\n",days);
    }
    return 0;
}
