//URI 1152 dark roads
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
 
#define V 200001
#define E 200001 
 
int tree[V];

struct road {
    int src;
    int dest;
    int length;
};
 
bool compare(road lhs, road rhs) {
    return lhs.length < rhs.length;
}

void initialize() {
	for (int i=0; i<V; i++)
		tree[i] = i;
}

int find_set(int element) {
	if (tree[element]==element) //parent
		return element;
	else find_set(tree[element]);
		
}

bool union_set(int x, int y) {
	int xset = find_set(x);
	int yset = find_set(y);
	if (xset == yset) { //cycle
		return true;
	}
	else {
		tree[xset] = yset;
		return false;
	}
}
 
int main() {
    int m, n;
    road input;
    bool canAdd;
     
    while (scanf("%d %d",&m, &n)==2) {
        if (!(m==0 && n==0)) {
             
            road info[n];
             
            unsigned lengthSum = 0;
             
            for (int i=0; i<n; i++) {
                scanf("%d %d %d",&info[i].src,&info[i].dest,&info[i].length);
                lengthSum += info[i].length;
            }
             
            sort(info, info + n, compare);
         	initialize();
         	
         	unsigned totalLength = 0; //for MST
         	for (int i=0; i<n; i++) {
         		if (union_set(info[i].src, info[i].dest)) {
         			totalLength += info[i].length;
         		}
         	}
    		        
            printf("%u\n",totalLength);
        }
    }
    return 0 ;
}
