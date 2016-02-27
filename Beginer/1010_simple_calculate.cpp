//Uri 1010 simple calculate
#include<iostream>
#include<stdio.h>
using namespace std;
 
int main() {
    int a,b,d,e;
    float c,f,pay;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    pay=(b*c)+(e*f);
    printf("%s%.2f\n","VALOR A PAGAR: R$ ",pay);
    return 0;
}
