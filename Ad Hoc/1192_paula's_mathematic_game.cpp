//URI 1192 Paula's Mathematic Game
#include <cstdio>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
 
int convertion(char c) {
    switch (c) {
           case '0' : { return 0; break; }
           case '1' : { return 1; break; }
           case '2' : { return 2; break; }
           case '3' : { return 3; break; }
           case '4' : { return 4; break; }
           case '5' : { return 5; break; }
           case '6' : { return 6; break; }
           case '7' : { return 7; break; }
           case '8' : { return 8; break; }
           case '9' : { return 9; break; }
            
    }
}
 
int main() {
    int t,len,a,b,out;
    string str;
    scanf("%d",&t);
    for (int i=1; i<=t; i++){
        cin>>str;
        a=convertion(str[0]);
        b=convertion(str[2]);
        if (a==b) {
                  out=a*b;
        }
        else if (isupper(str[1])) {
             out=b-a;
        }
        else out=a+b;
        printf("%d\n",out);
    }
    return 0;
}
