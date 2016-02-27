//URI 1216 getline one
#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
 
int main() {
    string str;
    double sum=0,num;
    double jum=0;
    while (getline(cin,str)) {
          scanf("%lf",&num);
          char temp;
          scanf("%c",&temp);
          sum=sum+num;
          jum++;
          //printf("%f %f %d\n",num,sum,jum);
    }
    printf("%.1lf\n",sum/jum);
    return 0;
}
