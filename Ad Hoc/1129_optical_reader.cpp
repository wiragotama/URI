//URI 1129 optical reader
#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
    int j,t,mark_white,mark_black,simpan,i;
    int temp;
     
    while(cin>>t) {
        if (t!=0) {
           for (j=1; j<=t; j++) {
            mark_white=0;
            mark_black=0;
            for (i=1; i<=5; i++) {
                cin>>temp;
                if (temp<=127) {
                   mark_black++;
                   simpan=i;
                }
                else {
                     mark_white++;
                }
                //cout<<temp<<' '<<mark_black<<' '<<mark_white<<' '<<simpan<<endl;
            }
            if (mark_black==1) {
               switch(simpan) {
                              case 1 : { printf("%c\n",'A'); break; }
                              case 2 : { printf("%c\n",'B'); break; }
                              case 3 : { printf("%c\n",'C'); break; }
                              case 4 : { printf("%c\n",'D'); break; }
                              case 5 : { printf("%c\n",'E'); break; }
               }
            }
            else {
                 printf("%c\n",'*');
            }
        }
        }
    }
    return 0;
}
