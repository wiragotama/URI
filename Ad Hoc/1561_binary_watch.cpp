//URI 1561 binary watch
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
	string str;
	
	while (cin>>str) {
		int hour=0, minute=0;
		hour = (str[1]-'0')+(str[0]-'0')*10;
		minute = (str[4]-'0')+(str[3]-'0')*10;
		
		int bin_hour[4] = {0,0,0,0};
		int bin_minute[6] = {0,0,0,0,0,0};
		
		int idx = 3;
		while (hour>0) {
			bin_hour[idx] = hour%2;
			hour /= 2;
			idx --;
		}
		
		idx = 5;
		while (minute>0) {
			bin_minute[idx] = minute%2;
			minute /= 2;
			idx --;
		}
		
		string binHour = "|   |   o         o         o         o  |   |";
		idx = 8;
		for (int i=0; i<4; i++) {
			if (bin_hour[i]==1) {
				binHour[idx] = 'o';
			}
			else binHour[idx] = ' ';
			idx+=10;
			
		}
		string binMin = "|   |   o     o     o     o     o     o  |   |";
		idx = 8;
		for (int i=0; i<6; i++) {
			if (bin_minute[i]==1) {
				binMin[idx] = 'o';
			}
			else binMin[idx] = ' ';
			idx+=6;
			
		}
		
		printf(" ____________________________________________\n");
		printf("|                                            |\n");
		printf("|    ____________________________________    |_\n");
		printf("|   |                                    |   |_)\n");
		printf("|   |   8         4         2         1  |   |\n");
		printf("|   |                                    |   |\n");
		cout<<binHour<<endl;
		printf("|   |                                    |   |\n");
		printf("|   |                                    |   |\n");
		cout<<binMin<<endl;
		printf("|   |                                    |   |\n");
		printf("|   |   32    16    8     4     2     1  |   |_\n");
		printf("|   |____________________________________|   |_)\n");
		printf("|                                            |\n");
		printf("|____________________________________________|\n");
		printf("\n");
	}
	return 0;
}


