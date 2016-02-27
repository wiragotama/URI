//1215 andy's first dictionary
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;

typedef int address;

typedef struct {
	string		info;
	address 	left;
	address		right;
} node;

typedef address BinTree;
node	arr[6000]; //container - arr[0] is root
int		LastPointer;

void PrintTree (BinTree P);
void AddLeaf (BinTree P, string str);

int main() {
	BinTree			BT;
	char			ch;
	string 			temp = "";
	node			Root;
	
	arr[0].info = "";
	arr[0].left = -99;
	arr[0].right = -99;
	LastPointer = 5999;
	
	while (scanf("%c",&ch)==1) {
		if (isalpha(ch)) {
			temp += tolower(ch);
		}
		else {
			int i = 0;
			if (temp!="") {
				if (arr[0].info=="") {
					arr[0].info = temp;
				}
				else {
					AddLeaf(0, temp);
				}
			}
			temp = "";
		}
		//cout << "out" << endl;
	}
	
	PrintTree(0);
	return 0;
}

void PrintTree (BinTree P) {
	//Algoritma (secara preorder)
	if (arr[P].left!=-99) {
		//cout << "go left " << endl;
		PrintTree(arr[P].left);
	}
	cout << arr[P].info << endl;
	if (arr[P].right!=-99) {
		PrintTree(arr[P].right);
		//cout << "go right " << endl;
	}
}

void AddLeaf (BinTree P, string str) {
	//Kamus lokal
	address	Pt;
	//Algoritma
	if (arr[P].info < str) {
		if (arr[P].right!=-99) 
			AddLeaf(arr[P].right,str);
		else {
			arr[LastPointer].info = str;
			arr[LastPointer].left = -99;
			arr[LastPointer].right = -99;
			arr[P].right = LastPointer;
			LastPointer--;
		}
		//cout << "addRight" << endl;
		//cout << arr[arr[P].right].info << endl;
	}
	else if (arr[P].info > str) {
		if (arr[P].left!=-99) 
			AddLeaf(arr[P].left,str);
		else {
			arr[LastPointer].info = str;
			arr[LastPointer].left = -99;
			arr[LastPointer].right = -99;
			arr[P].left = LastPointer;
			LastPointer--;
		}
		//cout << "addLeft" << endl;
	}
}


