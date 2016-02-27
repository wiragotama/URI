#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main() {
	char num[25];
	scanf("%s",num);
	int len = strlen(num);
	int i, j;  
	char temp;
    for(i=0, j=len-1; i < len/2; i++, j--)  
    {  
        temp = num[i];  
        num[i]=num[j];  
        num[j]=temp;  
    }  
    printf("%s\n", num);  
	return 0;
}