//URI 1017 fuel spent
#include <cstdio>
 
int main() {
    float tot;
    int hour,v;
    scanf("%d",&hour);
    scanf("%d",&v);
    tot=float(v)*float(hour)/float(12);
    printf("%.3f\n",tot);
    return 0;
}
