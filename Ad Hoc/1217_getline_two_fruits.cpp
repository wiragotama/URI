//uri 1217 getline two-frits
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

//variables
int i,n,len,j,space,total_weight;
float spent,spent_total;
string str;

//main program
int main() {
	scanf("%d",&n);
	spent_total=0.0;
	total_weight=0;
	for (i=1; i<=n; i++) {
		scanf("%f",&spent);
		//cout<<spent<<endl;
		spent_total=spent_total+spent;
		char temp;
		scanf("%c",&temp);
		getline(cin,str);
		 //read the enter line
		//cout<<str<<endl;
		space=0;
		len=str.length();
		for (j=0; j<len; j++) { //count how many space exits, number of words = sum of space + 1
			if (str[j]==' ') {
				space++;
			}
		}
		total_weight=total_weight+space+1;
		printf("day %d: %d kg\n",i,space+1);
	}
	printf("%.2f kg by day\n",float(total_weight)/float(n));
	printf("R$ %.2f by day\n",spent_total/float(n));
	return 0;
}
