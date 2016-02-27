//URI 1043 triangle
#include <cstdio>
#include <math.h>
int main() {
    float a,b,c,arr[3];
    float temp,area;
    scanf("%f%f%f",&a,&b,&c);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    for (int i=0; i<=1; i++) {
        for (int j=i+1; j<=2; j++) {
            if (arr[i]>arr[j]) {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    if (arr[2]==sqrt(arr[0]*arr[0]+arr[1]*arr[1])) {
       area=arr[0]+arr[1]+arr[2];
       printf("Perimetro = %.1f\n",area);
    }
    else if (arr[0]==arr[1]) {
         area=arr[0]+arr[1]+arr[2];
         printf("Perimetro = %.1f\n",area);
    }
    else {
         area=(a+b)*c/2.0;
         printf("Area = %.1f\n",area);
    }
    getchar();
    getchar();
    return 0;
}
