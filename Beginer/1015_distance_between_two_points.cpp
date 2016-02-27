//URI 1015 distance between two points
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
 
int main() {
    float x1,x2,y1,y2;
    float distance;
    cin>>x1>>y1;
    cin>>x2>>y2;
    distance=sqrt((x2-x1) * (x2-x1) + (y2-y1)*(y2-y1));
    printf("%.4f\n",distance);
    return 0;
}
