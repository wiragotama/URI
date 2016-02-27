//uri 1025 where is the marble
#include <iostream>
#include <cstdio>
using namespace std;
 
//functions
 void quick_sort(int left, int right);
 
//variables
int u, i, n, q, j, x, case_num, order, target, sum;
int count[10001];
bool found;

//main program
int main() {
    case_num=0;
    while (scanf("%d %d",&n,&q)==2) {
        if ((n!=0) && (q!=0)) {
            case_num++;
            printf("CASE# %d:\n",case_num);
            for (i=1; i<=n; i++) {
            	scanf("%d",&count[i]);
			}
			quick_sort(1,n);
			for (i=1; i<=q; i++) {
				scanf("%d",&target);
				//binary search
				found=false;
				j=1;
				while ((j<=n) && (!found)) {
					if (count[j]==target) {
						found=true;
						order=j;
					}
					j++;
				}
				if (!found) {
					printf("%d not found\n",target);
				}
				else printf("%d found at %d\n",target,order);
			}
        }
    }
    return 0;
}

void quick_sort(int left, int right) {
	int left_r,right_r,temp,pivot;
	left_r=left; right_r=right;
	pivot=count[(left_r+right_r)/2];
	while (left_r<=right_r) {
		while (count[left_r]<pivot) left_r++;
		while (count[right_r]>pivot) right_r--;
		if (left_r<=right_r) {
			temp=count[left_r];
			count[left_r]=count[right_r];
			count[right_r]=temp;
			left_r++;
			right_r--;
		}
	}
	if (left_r<right) quick_sort(left_r,right);
	if (right_r>left) quick_sort(left,right_r);
}
 
