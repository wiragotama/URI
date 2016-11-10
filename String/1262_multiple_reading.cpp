//URI 1262 multiple reading
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	string str;
	while (getline(cin, str)) {
		int procs;
		cin >> procs;
		getchar();

		int len = str.length();
		int i=0;
		int read_count = 0;
		int total_cycle = 0;
		bool flag = false;

		while (i<len) {
			if (str[i]=='R') {
				flag = true;
				read_count++;
				if (read_count==procs) {
					read_count = 0;
					total_cycle++;
				}
			}
			else if (str[i]=='W') {
				if (flag==true) {
					flag = false;
					if (read_count>0) total_cycle++;
					read_count = 0;
				}
				total_cycle++;
			}
			i++;
			//cout << i << " || " << total_cycle << endl;
		}

		if (read_count>0) {
			read_count = 0;
			total_cycle++;
		}

		cout << total_cycle << endl;
	}
	return 0;
}