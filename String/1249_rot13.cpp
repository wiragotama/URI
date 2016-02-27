//1249 rot13
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

//variables
string str;
char symbol[26],tmp,x; //alphabet 
int check,len,i,count;
bool get;

//main program
int main() {
	symbol[0]='a'; symbol[1]='b'; symbol[2]='c'; symbol[3]='d';
	symbol[4]='e'; symbol[5]='f'; symbol[6]='g'; symbol[7]='h';
	symbol[8]='i'; symbol[9]='j'; symbol[10]='k'; symbol[11]='l';
	symbol[12]='m'; symbol[13]='n'; symbol[14]='o'; symbol[15]='p';
	symbol[16]='q'; symbol[17]='r'; symbol[18]='s'; symbol[19]='t';
	symbol[20]='u'; symbol[21]='v'; symbol[22]='w'; symbol[23]='x';
	symbol[24]='y'; symbol[25]='z'; 
	while (scanf("%c",&tmp)==1) {
		//printf("%c",tmp);
		if (isalpha(tmp)) {
			x=tolower(tmp);
			count=0;
			get=false;
			while ((count<=25) && !get) {
				if (x==symbol[count]) {
					get=true;
				}
				else 
					count++;
			}
			//printf("%d\n",count);
			if (count>25) {
				printf("%c",tmp);
			}
			else {
				count=count+13;
				if (count>25)
				 	count=count-26;
				if (isupper(tmp)) {
					printf("%c",toupper(symbol[count]));
				}
				else printf("%c",symbol[count]);
			}
		}
		else printf("%c",tmp);
	}
	return 0;
}
