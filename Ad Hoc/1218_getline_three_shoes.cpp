//uri 1218 getline three - shoes
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

//variables
long cases,len,i,masculine,feminime,same;
char temp,number[2];
string str;
bool get;

//main program
int main() {
	cases=0;
	while (scanf("%s",&number)==1) {
		cases++;
		if (cases>1) {
			printf("\n");
		}
		//initialization
		masculine=0;
		feminime=0;
		same=0;
			
		scanf("%c",&temp); //scanning enter line, temp --> void variable
		getline(cin,str);	
		len=str.length();
		i=0;
		while (i<len) {
			if ((str[i]=='M')&& get) { 
				masculine++;
				get=false;
			}
			else if ((str[i]=='F') && get) {
				feminime++;
				get=false;
			}
			else if (str[i]!=' ') {
				if (str[i]==number[0] && (str[i+1]==number[1])) {
					same++; //the shoes number match!
					get=true;
					i++;
				}
			}
			i++;
		}	
		printf("Caso %ld:\n",cases);
		printf("Pares Iguais: %ld\n",same);
		printf("F: %ld\n",feminime);
		printf("M: %ld\n",masculine);
	}
	return 0;
}
