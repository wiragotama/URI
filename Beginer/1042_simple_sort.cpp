//URI 1042 simple sort
#include <cstdio>
int main() {
    int arr[4],a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    arr[1]=a;
    arr[2]=b;
    arr[3]=c;
    for (int i=1; i<=2; i++) {
        for (int j=i+1; j<=3; j++) {
            if (arr[i]>arr[j]) {
               int temp;
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    for (int i=1; i<=3; i++) {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}
