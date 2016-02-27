//URI 1168 LED
#include <cstdio>
#include <string.h>
#include <stdlib.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d",&t);
    for (int i=1; i<=t; i++) {
        char str[110];
        scanf("%s",str);
        int len;
        len=strlen(str);
        int led=0;
        for (int j=0; j<len; j++) {
            switch (str[j]) {
                   case '1' : {
                        led=led+2;
                        break;
                   }
                   case '2' : {
                        led=led+5;
                        break;     
                   }
                   case '3' : {
                        led=led+5;
                        break;     
                   }
                   case '4' : {
                        led=led+4;
                        break;     
                   }
                   case '5' : {
                        led=led+5;
                        break;     
                   }
                   case '6' : {
                        led=led+6;
                        break;     
                   }
                   case '7' : {
                        led=led+3;
                        break;     
                   }
                   case '8' : {
                        led=led+7;
                        break;     
                   }
                   case '9' : {
                        led=led+6;
                        break;     
                   }
                   case '0' : {
                        led=led+6;
                        break;     
                   }
            }
        }
        printf("%d leds\n",led);
    }
    return 0;
}
