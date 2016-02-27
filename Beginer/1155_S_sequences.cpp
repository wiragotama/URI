//URI 1155 S Sequence
#include <cstdio>
int main() {
    float s=0.0,b=1.0;
    for (int i=1; i<=100; i++) {
        s=s+(float(1)/float(b));
        //printf("%.2f\n",s);
        b=b+1.0;
    }
    printf("%.2f\n",s);
    //getchar();
    return 0;
}
