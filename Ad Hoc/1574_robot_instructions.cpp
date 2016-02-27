//URI 1574 robot instructions
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t, n;
	
	scanf("%d",&t);
	for (int i=0; i<t; i++) {
		scanf("%d",&n);
		getchar();
		
		int arr[n];
		int pos = 0;
		string str;
		
		for (int j=0; j<n; j++) {
			getline(cin,str);
			if (str=="RIGHT") {
				arr[j] = 1;
			}
			else if (str=="LEFT") {
				arr[j] = -1;
			}
			else {
				int len = str.length();
				int num = 0;
				for (int k=8; k<len; k++) {
					num = (num*10) + (str[k]-'0');
				}
				//cout << num << " "<<arr[num-1] <<endl;
				arr[j] = arr[num-1];
			}
			pos += arr[j];
			//printf("%d\n",pos);
		}
		printf("%d\n",pos);
	}
	return 0;
}
