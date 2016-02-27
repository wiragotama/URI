//1026 to carry or not to carry
#include<stdio.h>
int main()
{
    unsigned long a,b;
    while(scanf("%lu%lu",&a,&b)!=EOF)
    {
        printf("%lu\n",a^b);
    }
    return 0;
}
