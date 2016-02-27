//URI 1451 broken keyboard
#include <iostream>
#include <cstdio>
#include <cstring>
#include <list>
using namespace std;

int main() {
	list<char> str;
	list<char>::iterator it;
	char ch;
	bool front = false, back = true;
	
	while (scanf("%c",&ch)==1) {
		if (ch=='\n') {
			for (it=str.begin(); it!=str.end(); ++it) {
				printf("%c",*it);
			}
			printf("\n");
			str.clear();		
			back = true;
			front = false;
		}
		else {
			if (ch=='[') {
				it = str.begin();
				front = true;
				back = false;
			}
			else if (ch==']') {
				back = true;
				front = false;
			}
			else {
				if (front) {
					str.insert(it,ch);
					//str.push_front(ch);
				}			
				else str.push_back(ch);
			}
		}
	}
	return 0;
}
