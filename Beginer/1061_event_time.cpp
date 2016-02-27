//URI 1061 event time
#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    int start,end,hh,hh1,mm,mm1,tt,tt1,day,hour,minutes,second;
    string temp;
    char tmp;
    cin>>temp>>start;
    //cout<<temp<<endl;
    cin>>hh>>tmp>>mm>>tmp>>tt;
    //cout<<hh<<' '<<mm<<' '<<tt;
    cin>>temp>>end;
    cin>>hh1>>tmp>>mm1>>tmp>>tt1;
    //cout<<hh1<<' '<<mm1<<' '<<tt1;
     
    //printf("%d %d\n",end,start);
    day=end-start;
    if (hh1<hh) {
       day--;
    }
    hh1=hh1+24;
    hour=hh1-hh;
    if (mm>mm1) {
          hour--;
          mm1=mm1+60;
    }
    minutes=mm1-mm;
    if (tt>tt1) {
       minutes--;
       if (minutes<0) {
          hour--;
          minutes=59;
       }
       tt1=tt1+60;
    }
    second=tt1-tt;
    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hour);
    printf("%d minuto(s)\n",minutes);
    printf("%d segundo(s)\n",second);
    return 0;
}
