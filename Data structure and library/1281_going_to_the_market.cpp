//URI 1281 going to the market
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

//type
typedef struct {
	char name[100];
	float price;
} fruit;

//variables
double 	sum;
fruit 	data[1000];
int 	p, j, list, buy, i, n, number;
char 	target[100];
bool 	found;

//main program
int main() {
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		sum=0;
		scanf("%d",&list);
		for (j=1; j<=list; j++) {
			scanf("%s",&data[j].name);
			scanf("%f",&data[j].price);
			//cout<<data[j].name<<' '<<data[j].price;
		}
		scanf("%d",&buy);
		for (j=1; j<=buy; j++) {
			scanf("%s",&target);
			scanf("%d",&number);
			//cout<<target<<' '<<number;
			p=1;
			found=false;
			while ((p<=list) && !found) {
				if (strcmp(data[p].name,target)==0) {
					sum=sum+(data[p].price*number);
					found=true;
				}
				else p++;
			}
		}
		printf("R$ %.2lf\n",sum);
	}
	return 0;
}
