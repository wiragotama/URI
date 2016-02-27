//URI 1069 diamonds and sand
#include <cstdio>
#include <iostream>
#include <cstring>
#include <stdlib.h>
 
int main() {
    int t;
    char str[1010];
     
    scanf("%d",&t);
    for (int i=1; i<=t; i++) {
        scanf("%s",str);
        int left=0;
        int number=0;
        int len=strlen(str);
        for (int j=0; j<len; j++) {
            if (str[j]=='<') 
               left++;
            if ((str[j]=='>') && (left>=1)) {
               left--;
               number++;
            }
        }
        printf("%d\n",number);
    }
    return 0;
}
