//URI 1244 sort by length
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

struct Input {
    string str;
    int length;
    int num;
};

struct myclass {
	bool operator() (Input i,Input j) { 
		if (i.length > j.length) {
			return true;
		}
		else if (i.length < j.length) {
			return false;
		}
		else {
			return (i.num < j.num);
		}
	}
} myobject;


string getnext(string& str, int& i);
void skip_space(string& str, int& i);

int main() {
	int n;
	string str;
	scanf("%d",&n);
	getchar();
	for (int i=0; i<n; i++) {
		
		vector<Input> queue;
		getline(cin,str);
		int iterator = 0;
		int words = 0;
		//cout << str << endl;
		
		Input temp;
		while (iterator<str.length()) {
			temp.str = getnext(str,iterator);
			skip_space(str, iterator);
			if (temp.str!="") {
				temp.num = words;
				words++;
				temp.length = temp.str.length();
				queue.push_back(temp);
			}
		}
		
		sort(queue.begin(), queue.end(), myobject);
		for (vector<Input>::iterator it=queue.begin(); it!=queue.end(); ++it) {
			if (it!=queue.begin()) {
				printf(" ");
			}
			cout << (*it).str;
		}
		printf("\n");
	}
	return 0;
}

string getnext(string& str, int& i) {
	string temp = "";
	while (i<str.length() && str[i]!=' ') {
		temp = temp + str[i];
		i++;
	}
	return temp;
}

void skip_space(string& str, int& i) {
	while (i<str.length() && str[i]==' ') {
		i++;
	}
}
