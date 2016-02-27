//URI 1020 age in days
#include <iostream>
using namespace std;
 
int main() {
    int n,p;
    cin>>n;
    p=n/365;
    if (p>0)
       n=n-p*365;
    cout<<p<<" ano(s)"<<endl;
     
    p=n/30;
    if (p>0) 
       n=n-p*30;
    cout<<p<<" mes(es)"<<endl;
    cout<<n<<" dia(s)"<<endl;
    return 0;
}
