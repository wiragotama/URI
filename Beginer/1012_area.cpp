//Uri 1012 area
#include<cstdio>
#include<iostream>
using namespace std;
int main() {
    float a,b,c;
    cin>>a>>b>>c;
    printf("%s%.3f\n","TRIANGULO: ",a*c/2);
    printf("%s%.3f\n","CIRCULO: ",(3.14159)*c*c);
    printf("%s%.3f\n","TRAPEZIO: ",(a+b)*c/2);
    printf("%s%.3f\n","QUADRADO: ",b*b);
    printf("%s%.3f\n","RETANGULO: ",a*b);
    return 0;
}
