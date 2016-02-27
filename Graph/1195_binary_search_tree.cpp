//URi 1195 binary search tree
#include <iostream>
#include <cstdio>
using namespace std;

typedef struct {
	int	value;
	int left;
	int right;
} node;

node	arr[501]; //arr[0] is root
int 	available;
int 	count;

void addLeaf(int value, int pointer);
void printPre(int pointer, int n);
void printIn(int pointer, int n);
void printPost(int pointer, int n);

int main() {
	int c, n, a;
	
	scanf("%d",&c);
	for (int i=1; i<=c; i++) {
		
		scanf("%d",&n);
		
		for (int j=0; j<501; j++) {
			arr[j].value = -99;
			arr[j].left = arr[j].right = -99;
		}
		available = 0;
		
		for (int j=0; j<n; j++) {
			scanf("%d",&a);
			if (available==0) {
				arr[available].value = a;
				available++;
			}
			else addLeaf(a,0);
			//printf("In..: "); printIn(0); printf("\n");
		}
		
		printf("Case %d:\n",i); count = 1;
		printf("Pre.: "); printPre(0,n); printf("\n"); count = 1;
		printf("In..: "); printIn(0,n); printf("\n"); count = 1;
		printf("Post: "); printPost(0,n); printf("\n");
		printf("\n");
	}
	return 0;
}

void addLeaf(int value, int pointer) {
	//printf("masuk %d %d\n",value,available);
	if (arr[pointer].value>value) {
		if (arr[pointer].left!=-99)
			addLeaf(value,arr[pointer].left);
		else { 
			arr[pointer].left = available;
			arr[available].value = value;
			available++;
		}
	}
	else {
		if (arr[pointer].right!=-99)
			addLeaf(value,arr[pointer].right);
		else {
			arr[pointer].right = available;
			arr[available].value = value;
			available++;
		}
	}
}

void printPre(int pointer, int n) {
	if (arr[pointer].value!=-99) {
		printf("%d",arr[pointer].value);
		if (count<n) printf(" ");
		count++;
		if (arr[pointer].left!=-99)
			printPre(arr[pointer].left,n);
		if (arr[pointer].right!=-99)
			printPre(arr[pointer].right,n);
	}
}

void printIn(int pointer, int n) {
	if (arr[pointer].value!=-99) {
		if (arr[pointer].left!=-99)
			printIn(arr[pointer].left,n);
		printf("%d",arr[pointer].value);
		if (count<n) printf(" ");
		count++;
		if (arr[pointer].right!=-99)
			printIn(arr[pointer].right,n);
	}
}

void printPost(int pointer, int n) {
	if (arr[pointer].value!=-99) {
		if (arr[pointer].left!=-99)
			printPost(arr[pointer].left,n);
		if (arr[pointer].right!=-99)
			printPost(arr[pointer].right,n);
		printf("%d",arr[pointer].value);
		if (count<n) printf(" ");
		count++;
	}
}
