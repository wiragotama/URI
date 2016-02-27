//URI 1068 Parenthesis Balance I
#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
 
 
int main() {
    char str[1200];
    int len;
    while (cin>>str) {
          len=strlen(str);
          //printf("%d\n",len);
          int i=0;
          int jum=0;
          bool ket=true;
          while ((i<len) && (ket)) {
                if (str[i]=='(') {
                     jum++;
                }
                else if (str[i]==')') jum--;
                if (jum<0) ket=false;
                //printf("%d %d %c\n",jum,ket,str[i]);
                i++;
          }
          //printf("%s %d\n",str,jum);
          if (jum!=0) {
             printf("incorrect\n");
          }
          else printf("correct\n");
    }
    return 0;
}
