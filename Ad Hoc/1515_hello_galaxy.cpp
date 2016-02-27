//URI 1515 hello galaxy
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int n;
	int year, time;
	char name[100];
	char result[100];
	
	while (scanf("%d",&n)==1) {
		if (n>0) {
			getchar();
			int min = 3000;	
			
			for (int i=0; i<n; i++) {
				scanf("%s%d%d",name,&year,&time);	
				if (year-time < min) {
					min = year-time;
					strcpy(result,name);
				}
			}
			printf("%s\n",result);
		}
	}
	return 0;
}
