//URI 1114 fixed password
#include <cstdio>
#include <iostream>
using namespace std;
 
int main() {
    bool valid=true;
    int a;
    while (valid) {
          scanf("%d",&a);
          if (a!=2002) {
             printf("Senha Invalida\n");
          }   
          else {
               valid=false;
               printf("Acesso Permitido\n");
          }
    }
    return 0;
}
