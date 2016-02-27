//URI 1251 tell me the frequencies
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
	int number;
	int freq;
} input;

struct myclass {
	bool operator() (input i,input j) { 
		if (i.freq < j.freq) {
			return false;
		}
		else if (i.freq > j.freq) {
			return true;
		}
		else {
			return (i.number < j.number);
		}
	}
} myobject;

int main() {
	string str;
	int it = 0;
	while (cin>>str) {
		if (it>0) printf("\n");
		int len = str.length();
		
		input arr[300];
		int low = 300;
		int high = -1;
		for (int i=0; i<300; i++) {
			arr[i].number = i;
			arr[i].freq = 0;
		}
		
		int obj = 0;
		for (int i=0; i<len; i++) {
			arr[str[i]].freq++;
			if (!(arr[str[i]].freq > 1)) {
				obj++;
			}
		}
		
		sort(arr,arr+300,myobject);
		
		for (int i=obj-1; i>=0;i--) {
			printf("%d %d\n",arr[i].number,arr[i].freq);
		}
		it++;
	}
	return 0;
}
