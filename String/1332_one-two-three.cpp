//URI 1332 one-two-three
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
	int 	n;
	char 	word[32];
	char 	temp1[4] = "one";
	char 	temp2[4] = "two";
	
	scanf("%d",&n);
	getchar();
	for (int i=0; i<n; i++) {
		scanf("%s",word);
		//puts(word);
		int len = strlen(word);
		if (len==5) {
			printf("3\n");
		}
		else {
			int same = 0;
			for (int i=0; i<4; i++) {
				if (word[i]==temp1[i])
					same++;
			}
			if (same>=2) {
				printf("1\n");
			}
			else printf("2\n");
		}
	}
	return 0;
}
