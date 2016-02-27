//1211 economic_phonebook
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int	len, temp;
	string	arr[100000];
	bool	flag[100000];
	long	result;
	
	while (scanf("%d",&n)==1) {
		
		result = 0;	
		memset(flag,true,sizeof(flag));
		
		//first string
		for (int i=0; i<1; i++) {
			getchar();
			getline(cin,arr[i]);
		}
		
		//next string
		for (int i=1; i<n; i++) {
			//getchar();
			getline(cin,arr[i]);
		}
		
		sort(arr,arr+n);
		
		//process
		len = arr[0].length();
		result = 0;
		
		for (int i=1; i<n; i++) {
			bool stop = false;
			for (int j=0; j<len && !stop; j++) {
				if (arr[i][j]==arr[i-1][j])
					result++;
				else stop = true;
			}
		}
		
		printf("%ld\n",result);
	}
	return 0;
}
