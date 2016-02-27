//URI 1255 letter frequency
#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
using namespace std;
 
int main() {
    int t,sum[28],max; //sum buat ngitung jumlah letter, sum[1] = jml letter 'a'
    char ch[1],str[210];
     
    scanf("%d",&t); //scanning test case
    gets(ch);
    for (int i=1; i<=t; i++) {
        for (int j=1; j<=26; j++) { //inisialisasi counting letternya
            sum[j]=0;
        }
        max=0;
        gets(str);
        int len=strlen(str);
        int p,j;
        //printf("%s %d",str,len);
        for (j=0; j<len; j++) {
            if (isalpha(str[j])) {
                p=int(tolower(str[j])-96); //ubah karakter ke code ascii lalu -96 spy sesuai sama index counting
                sum[p]++;
                if (sum[p]>=max) {
                   max=sum[p];
                }
                //printf("%d %d %d\n",p,sum[p],max);
            }
        }
        //printf("%d\n",max);
        for (j=1; j<=26; j++) {
            //printf("%d\n",sum[j]);
            if (sum[j]==max) {
               char c =j+96;
               printf("%c",c);
            }
        }
        printf("\n");
    }
    return 0;
}
