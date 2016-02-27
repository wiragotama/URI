//URI 1262 multiple reading
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int trace(const string& str, int x, int y, int n);

int main() {
	vector<char> list;
	int n;
	string str;
	
	while (getline(cin,str)) {
		scanf("%d",&n);
		getchar();
		int len = str.length();
		int hasil = 0;
		
		for (int i=0; i<len; i+=n) {
			if (i+(n-1) <= len-1)
				hasil += trace(str,i,i+(n-1),n);
			else hasil += trace(str,i,len-1,n);
		}	
		printf("%d\n",hasil);
	}
	return 0;
}

int trace(const string& str, int x, int y, int n) {
	int p = x;
	int arr[2];
	arr[0] = arr[1] = 0;
	
	for (int p=x; p<=y; p++) {
		if (str[p]=='R') {
			arr[0]++;
		}
		else arr[1]++;
	}
	
	if (arr[1]==0) {
		return 1;
	}
	else {
		if (arr[1]==n)
			return n;
		else return arr[1] + 1;
	}
}
