//URi 1140 flower_flourish_from_france
#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
 
int main() {
    string str;
    char tau;
    int len,i;
    bool ket;
    do {
       getline(cin,str);
       if (str!="*") {
          len=str.length();
          //cout<<str<<' '<<len<<endl;
          i=0;
          tau=tolower(str[0]);
          ket=true;
          while ((i<len) && (ket)){
                //printf("%c %c %d\n",tau,tolower(str[i]),i);
                if (tolower(str[i])!=tau) 
                   ket=false;
                while ((str[i]!=' ') && (i<len)){  
                      i++;
                      //printf("%c %d\n",str[i],i);
                }
                while ((str[i]==' ') && (i<len)) {
                      i++;
                      //printf("%c %d\n",str[i],i);
                }
                //printf("%c %d\n",str[i],i);
          }
          if (ket) 
             printf("Y\n");
          else
               printf("N\n");
       }    
    } while (str!="*");
    return 0;
}
