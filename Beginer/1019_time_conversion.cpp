//URI 1019 time conversion
#include <iostream>
using namespace std;
 
int main() {
    int h,n;
    cin>>n;
    h=n/3600;
    if (h>0) 
       n=n-h*3600;
    cout<<h<<':';
    h=n/60;
    if (h>0) 
       n=n-h*60;
    cout<<h<<':';
    cout<<n<<endl;
    return 0;
}
