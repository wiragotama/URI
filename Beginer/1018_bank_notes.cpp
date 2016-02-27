//URI 1018 bank notes
#include <iostream>
using namespace std;
 
int main() {
    int p,n;
    cin>>n;
    cout<<n<<endl;
    p=n/100;
    if (p>0) {
       n=n-p*100;
    }
    cout<<p<<" nota(s) de R$ 100,00"<<endl;
    p=n/50;
    if (p>0) {
       n=n-p*50;
    }
    cout<<p<<" nota(s) de R$ 50,00"<<endl;
    p=n/20;
    if (p>0) {
       n=n-p*20;
    }
    cout<<p<<" nota(s) de R$ 20,00"<<endl;
    p=n/10;
    if (p>0) {
       n=n-p*10;
    }
    cout<<p<<" nota(s) de R$ 10,00"<<endl;
    p=n/5;
    if (p>0) {
       n=n-p*5;
    }
    cout<<p<<" nota(s) de R$ 5,00"<<endl;
    p=n/2;
    if (p>0) {
       n=n-p*2;
    }
    cout<<p<<" nota(s) de R$ 2,00"<<endl;
    cout<<n<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
