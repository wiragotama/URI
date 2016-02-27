//URI 1581 international chat
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int		n, t;
	string	str;
	
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		
		scanf("%d",&t);
		getchar();
		
		string arr[t];
		bool different = false;
		
		for (int j=0; j<t; j++) {
			getline(cin,str);		
			arr[j] = str;
			if (j>0 && arr[j]!=arr[j-1]) {
				different = true;
			}
		}
		
		if (different) {
			printf("ingles\n");
		}
		else {
			cout << arr[t-1] << endl;
		}
	}
	return 0;
}
