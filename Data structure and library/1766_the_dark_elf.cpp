//URI 1766 the dark elf
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

typedef struct {
	string name;
	int weight;
	int age;
	double height;
} data;

bool acompare(data lhs, data rhs) {
	if (lhs.weight==rhs.weight) {
		if (lhs.age==rhs.age) {
			if (lhs.height==rhs.height) {
				return lhs.name < rhs.name;
			}
			else return lhs.height < rhs.height;
		}
		else return lhs.age < rhs.age;
	}
	else return lhs.weight > rhs.weight;
}

data arr[1000];

int main() {
	int t, n, m;
	scanf("%d",&t);
	for (int x=0; x<t; x++) {
		scanf("%d %d",&n,&m);
		for (int i=0; i<n; i++) {
			cin >> arr[i].name;
			scanf("%d %d %lf",&arr[i].weight, &arr[i].age, &arr[i].height);
		}
		//sort
		printf("CENARIO {%d}\n",x+1);
		sort(arr, arr+n, acompare);
		for (int i=0; i<m; i++) {
			printf("%d - ",i+1);
			cout << arr[i].name << endl;
		}
	}
	return 0;
}