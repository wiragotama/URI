//URI 1156 S sequence 2
#include <cstdio>
int main() {
    float s=0.0,b=1.0;
    for (int i=1; i<=39; i=i+2) {
        s=s+(float(i)/b);
        b=b*2.0;
    }
    printf("%.2f\n",s);
    getchar();
    return 0;
}
