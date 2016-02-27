//URI 1238 Combiner
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str1,str2,str_new;
    int t,len1,len2,i;
    while(cin>>t) {
    for (int p=1; p<=t; p++) {
        cin>>str1>>str2;
        str_new="";
        len1=str1.length();
        len2=str2.length();
        //cout<<len1<<" "<<len2<<endl;
        i=0;
        while (((len1-i)>0) && ((len2-i)>0)) {
              str_new=str_new+str1[i];
              str_new=str_new+str2[i];
              i++;
        }
        if (len1-i>0) {
           while (i<=len1-1) {
                 str_new=str_new+str1[i];
                 i++;
           }
        }
        else {
             while (i<=len2-1) {
                 str_new=str_new+str2[i];
                 i++;
           }
        }
        cout<<str_new<<endl;
    }
    }
    return 0;
}
