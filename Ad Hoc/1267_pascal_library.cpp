//uri 1267 pascal library
#include <iostream>
#include <cstdio>
using namespace std;

//variables
int arr[500],i,j,d,n;
int tmp;
bool get;

//main program
int main() {
	while (scanf("%d %d",&d,&n)==2) {
		if ((d!=0) && (n!=0)) {
			//empty the array
			for (i=0; i<500; i++) {
				arr[i]=0;
			}
			
			//reading the input + processing
			for (i=0; i<d; i++) {
				for (j=0; j<n; j++) {
					scanf("%d",&tmp);
					if (tmp==1) {
						arr[i]++;
					}
				}
			}
			i=0;
			get=false;
			while ((i<d) && !get) {
				if (arr[i]==n) {
					get=true;
				}
				else i++;
			}
			if (get) {
				printf("yes\n");
			}
			else printf("no\n");
		}
	}
	return 0;
}
