//URI 1258 T-shirts
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;

typedef struct {
	string	colour;
	char	size;
	string	name;	
} data;

bool compare(data a, data b) {
	if (a.colour<b.colour) {
		return true;
	}
	else {
		if (a.colour==b.colour) {
			if (a.size>b.size) {
				return true;
			}
			else {
				if (a.size==b.size) {
					return (a.name<b.name);
				}
				else return false;
			}
		}
		else return false;
	}
}

int main() {
	int 	t=0, n;
	string	str, c;
	char 	s;
	
	while (scanf("%d",&n)==1) {
		getchar();
		if (n!=0) {
			
			data arr[n];
			for (int i=0; i<n; ++i) {
				getline(cin,str);
				cin >> c >> s;
				getchar();
				//cout << str << " " << c << " " << s << endl;
				arr[i].name = str;
				arr[i].colour = c;
				arr[i].size = s;
			}
			sort(arr, arr+n, compare);
			
			if (t>0) {
				cout << endl;
			}
			for (int i=0; i<n; ++i) {
				cout << arr[i].colour << " " << arr[i].size << " " << arr[i].name << endl;
			}
			
			++t;
		}
	}
	return 0;
}
