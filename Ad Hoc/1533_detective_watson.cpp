//URI 1533 max
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
     
    while (scanf("%d",&n)==1) {
        if (n!=0) {
            int arr[n], brr[n];
             
            for (int i=0; i<n; i++) {
                scanf("%d",&arr[i]);
                brr[i] = arr[i];
            }
            sort(arr,arr+n);
             
            bool found = false;
            int i = 0;
            while (!found) {
                if (brr[i]==arr[n-2]) {
                    found = true;
                } 
                else i++;
            }       
            printf("%d\n",i+1);
        }
    }
    return 0;
}