//URI 1303 spurs rock
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
  
typedef struct {
    int number;
    int score;
    int point;
} team;
  
struct myclass{
    bool operator() (team a, team b) {
        if (a.point>b.point) {
            return true;
        }
        else if (a.point < b.point) {
            return false;
        }
        else {
            double x = (double)a.score/(double)a.point;
            double y = (double)b.score/(double)b.point;
            if (x > y) {
                return false;
            }
            else if (x < y) {
                return true;
            }
            else {
                return (a.number<b.number);
            }
        }
    }
} myobject;
  
int main() {
    int n, instancia=1;
    int x, y, z, w;
    while (scanf("%d",&n)==1) {
        if (n!=0) {
            team myteam[n];
            for (int i=0; i<n; i++) {
                myteam[i].number = i+1;
                myteam[i].score = 0;
                myteam[i].point = 0;
            }
            int len = n * (n-1) / 2;
              
            for (int i=0; i<len; i++) {
                scanf("%d%d%d%d",&x,&y,&z,&w);
                if (y > w) {
                    myteam[x-1].point+=2;
                    myteam[z-1].point+=1;
                }
                else { //y < w
                    myteam[z-1].point+=2;
                    myteam[x-1].point+=1;
                }
                myteam[x-1].score += y;
                myteam[z-1].score += w;
            }
              
            sort(myteam,myteam+n,myobject);
            if (instancia>0) printf("\n");
            printf("Instancia %d\n",instancia);
            for (int i=0; i<n; i++) {
                if (i>0) printf(" ");
                printf("%d",myteam[i].number);
            }
            printf("\n");
            instancia++;
        }
    }
    return 0;
}
