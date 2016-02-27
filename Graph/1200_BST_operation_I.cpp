//URi 1195 binary search tree
#include <iostream>
#include <cstdio>
using namespace std;

typedef struct {
	char	value;
	int left;
	int right;
} node;

node	arr[1000000]; //arr[0] is root
int 	available;
int 	count;

void addLeaf(char value, int pointer);
void printPre(int pointer, int n);
void printIn(int pointer, int n);
void printPost(int pointer, int n);
bool search(char value, int pointer);

int main() {
	string str;
	available = 0;
	int total = 0;
	
	for (int i=0; i<100000; i++) {
		arr[i].value = '0';
		arr[i].left = arr[i].right = -99;
	}
	
	while (getline(cin,str)) {
		if (str.length()==3) {
			if (str[0]=='I') {
				if (available==0) {
					arr[0].value = str[2];
					available++;
				}
				else addLeaf(str[2],0);
				total++;
			}
			else {
				if (search(str[2],0)) {
					printf("%c existe\n",str[2]);
				}
				else printf("%c nao existe\n",str[2]);
			}
		}
		else if (str.length()==6) {
			count = 1;
			if (available!=0) {
				printIn(0,total);
			}
			printf("\n");
		}
		else {
			count = 1;
			if (str[1]=='R') {
				if (available!=0) {
					printPre(0,total);
				}
				printf("\n");
			} 
			else {
				if (available!=0) {
					printPost(0,total);
				}
				printf("\n");
			}
		}
	}
	return 0;
}

void addLeaf(char value, int pointer) {
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
		printf("%c",arr[pointer].value);
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
		printf("%c",arr[pointer].value);
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
		printf("%c",arr[pointer].value);
		if (count<n) printf(" ");
		count++;
	}
}

bool search(char value, int pointer) {
	if (arr[pointer].value=='0') {
		return false;
	}
	else if (arr[pointer].value==value) {
		return true;
	}
	else if (arr[pointer].value>value) {
		if (arr[pointer].left!=-99)
			return search(value, arr[pointer].left);
		else return false;
	}
	else {
		if (arr[pointer].right!=-99)
			return search(value, arr[pointer].right);
		else return false;
	}
}
