//URI 1248 diet plan
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	int n;
	int arr[26];
	string all, breakfast, lunch, dinner;
	
	scanf("%d",&n);
	getchar();
	for (int i=0; i<n; i++) {
		bool cheat = false;
		
		getline(cin,all);
		getline(cin,breakfast);
		getline(cin,lunch);
		
		for (int j=0; j<26; j++) {
			arr[j] = 0;
		}
		
		int len1 = all.length();
		for (int j=0; j<len1; j++) {
			arr[all[j]-'A']++;
		}
		
		len1 = breakfast.length();
		for (int j=0; j<len1 && !cheat; j++) {
			arr[breakfast[j]-'A']--;
			if (arr[breakfast[j]-'A']<0) {
				cheat = true;
			}
		}
		
		len1 = lunch.length();
		for (int j=0; j<len1 && !cheat; j++) {
			arr[lunch[j]-'A']--;
			if (arr[lunch[j]-'A']<0) {
				cheat = true;
			}
		}
		
		if (!cheat) {
			for (int j=0; j<26; j++) {
				for (int k=0; k<arr[j]; k++) {
					printf("%c",'A'+j);
				}
			}
			printf("\n");
		}
		else printf("CHEATER\n");
	}
	return 0;
}
