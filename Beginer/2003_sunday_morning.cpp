#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	string str;
	string::size_type sz;

	int meeting = (8-5)*60;
	while (cin>>str) {
		int arrive = ((stoi(str.substr(0,1))-5)*60 + 60 + (stoi(str.substr(2,2))));
		(arrive>meeting) ? printf("Atraso maximo: %d\n",arrive-meeting) : printf("Atraso maximo: 0\n");
	}
	return 0;
}