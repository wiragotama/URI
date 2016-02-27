//URi 1089 musical loop-South America/Brazil Regional Contest - ACM ICPC - 2009.
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
     
    while (scanf("%d",&t) && t) {
          int a[10000 + 2];
          for (int i=0; i<t; i++) scanf("%d",&a[i]);
          a[t]=a[0];
          a[t+1]=a[1];
           
          bool down=false;
          bool up=false;
           
          if (a[0]<a[1]) up=true;
          else down=true;
           
          int peak=1;
          for (int i=2; i<t; i++) {
              if (up && (a[i-1]>a[i])) {
                 peak++;
                 up=false;
                 down=true;
              }
              else if (down && (a[i-1]<a[i])) {
                   peak++;
                   up=true;
                   down=false;
              }
          }
          if (up && (a[t]<a[t+1])) peak++;
          else if (down && (a[t]>a[t+1])) peak++;
          printf("%d\n",peak);
    }
    return 0;
}
