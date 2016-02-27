//1023 Drought
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;

long i,n,test_case;
long people,consume,average[1000],temp_1,keluar;
long people_sum,consume_sum;
double consume_avg;

void empty() {
	for (i=0; i<=200; i++) {
		average[i]=0;
	}
}

int main() {
	test_case=0;
	do {
		scanf("%ld",&n);
		if (n!=0) {
			empty();
			if (test_case>0) printf("\n");
			test_case++;
			people_sum=0;
			consume_sum=0;
			for (i=1; i<=n; i++) {
				scanf("%d %d",&people,&consume);
				temp_1=consume/people;
				average[temp_1]=average[temp_1]+people;
				people_sum=people_sum+people;
				consume_sum=consume_sum+consume;
			}
			
			keluar=0;
			consume_avg= floor((double(consume_sum)/double(people_sum))*100)/100;
			printf("Cidade# %ld:\n",test_case);
			for (i=0; i<=200; i++) {
				if (average[i]>0) {
					if (keluar>0) printf(" ");
					printf("%d-%d",average[i],i);
					keluar++;
				}
			}
			printf("\n");
			printf("Consumo medio: %.2lf m3.\n",consume_avg);	
		}
	} while (n!=0);
	return 0;
}
