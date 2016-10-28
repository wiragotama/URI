//URI 1551 Complete Sentence
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	int n;
	string str;
	scanf("%d",&n);
	getchar();
	for (int i=0; i<n; i++) {
		getline(cin, str);
		int l = str.length();
		int arr[26];
		for (int j=0; j<26; j++)
			arr[j]=0;
		for (int j=0; j<l; j++) {
			if(isalpha(str[j])) arr[str[j]-'a']++;
		}
		int c = 0;
		for (int j=0; j<26; j++) {
			if (arr[j]>0) {
				c++;
			}
		}
		if (c==26) {
			cout << "frase completa" << endl;
		}
		else if (c>=13) {
			cout << "frase quase completa" << endl;
		}
		else {
			cout << "frase mal elaborada" << endl;
		}
	}
	return 0;
}