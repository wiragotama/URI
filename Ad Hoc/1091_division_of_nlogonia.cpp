//URi 1091 division of nlogonia
#include <iostream>
using namespace std;
 
int k,i,a,b,pusat_x,pusat_y;
 
int main() {
    cin>>k;
    while (k!=0) {
          cin>>pusat_x>>pusat_y;
          for (i=1; i<=k; i++) {
              cin>>a>>b;
              if ((a==pusat_x) || (b==pusat_y)) {
                 cout<<"divisa"<<endl;
              }
              else if ((a<pusat_x) && (b>pusat_y)) {
                   cout<<"NO"<<endl;
              }
              else if ((a>pusat_x) && (b>pusat_y)) {
                   cout<<"NE"<<endl;
              }
              else if ((a>pusat_x) && (b<pusat_y)) {
                   cout<<"SE"<<endl;
              }
              else if ((a<pusat_x) && (b<pusat_y)) {
                   cout<<"SO"<<endl;
              }
          }
          cin>>k;
    }
    return 0;
}
