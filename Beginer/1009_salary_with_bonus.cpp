//Uri 1009 salary with bonus
#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
    string str;
    float a,b;
    cin>>str;
    scanf("%f",&a);
    scanf("%f",&b);
    printf("%s%.2f\n","TOTAL = R$ ",a+(b*15/100));
    return 0;
}
