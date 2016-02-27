//URI 1277 short attendance
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, t;
	string name, attendance;
	vector<string> list;
	
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d",&t);
		getchar();
		getline(cin,name);
		getline(cin,attendance);
	
		int len = name.length();
		string temp = "";
		for (int i=0; i<=len; i++) {
			if (name[i]==' ' || i==len) {
				list.push_back(temp);
				temp = "";
			}
			else temp += name[i];
		}	
		
		int count = 0;
		int c = 0, come = 0, outed = 0;
		len = attendance.length();
		
		for (int i=0; i<=len; i++) {
			if (attendance[i]==' '|| i==len) {
				//cout << double(come)/double(c) << endl;
				if (double(come)/double(c) < 0.75) {
					if (outed>0) cout << " ";
					cout << list[count];
					outed++;
				}
				count++;
				come = 0;
				c = 0;
			}
			else {
				if (!(attendance[i]=='M')) {
					if (attendance[i]=='P') {
						come++;
					}
					c++;
				}
			}
		}
		cout << endl;
		list.clear();
	}
	return 0;
}
