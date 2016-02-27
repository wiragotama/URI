//URI 1171 number frequence
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int arr[2001],n,d;
    for (int i=0; i<=2000; i++) {
        arr[i]=0;
    }
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf("%d",&d);
        arr[d]++;
    }
    for (int i=1; i<=2000; i++) {
        if (arr[i]>0) {
           printf("%d aparece %d vez(es)\n",i,arr[i]);
        }
    }
    return 0;
}
