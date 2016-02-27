//Uri 1103 alarm clock
#include<iostream>
#include<cstdio>
using namespace std;
 
int main() {
    int a,b,c,d,minutes;
    while (cin>>a>>b>>c>>d) {
          if ((a!=0) || (b!=0) || (c!=0) || (d!=0)) {
              if (a>=c) {
                      if ((a==c) && (b==d)) {
                         minutes=0;
                      }
                      else if ((a==c) && (d>b)) {
                           minutes=d-b;
                      }
                      else if ((a==c) && (d<b)){
                           minutes=60*23+(d+60-b);
                      }
                      else {
                           c=c+24;
                           if (d>b) {
                              minutes=d-b+(c-a)*60;
                           }
                           else {
                                minutes=(d+60-b)+(c-a-1)*60;
                           }
                      }
              }
              else {
                   if (d>b) {
                      minutes=(d-b)+(c-a)*60;
                   }
                   else {
                        minutes=(d+60-b)+(c-a-1)*60;     
                   } 
              }
              printf("%d\n",minutes);
          }
    }
    return 0;
}
