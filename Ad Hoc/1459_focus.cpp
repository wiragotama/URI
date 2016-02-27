#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

struct data {
	int start;
	int end;
	bool operator<(const data& rhs) const { 
		if (start < rhs.start) {
			return true;
		}
		else if (start == rhs.start) {
			if (end < rhs.end) {
				return false;
			}
			else return true;
		}
		else return false;
 	}
};

bool bersinggungan(const data& lhs, const data& rhs) {
	bool bersinggungan = false;
	if (lhs.start == rhs.start && lhs.end==rhs.end) {
		bersinggungan = true;
	}
	else if (lhs.start <= rhs.start && lhs.end >= rhs.start && lhs.end <= rhs.end) {
		bersinggungan = true;
	}
	else if (lhs.start >= rhs.start && lhs.end >= rhs.end && lhs.start <= rhs.end) {
		bersinggungan = true;
	}
	else if (lhs.start <= rhs.start && lhs.end >= rhs.end) {
		bersinggungan = true;
	}
	else if (lhs.start >= rhs.start && lhs.end <= rhs.end) {
		bersinggungan = true;
	}
	return bersinggungan;
}

int main() {
	int N;
	while (scanf("%d",&N)==1) {
		data arr[N];
		int a, b;
		for (int i=0; i<N; i++) {
			scanf("%d %d",&a, &b);
			arr[i].start = a;
			arr[i].end = b;
		}
		sort(arr, arr+N);

		vector<data>setE;
		setE.push_back(arr[0]);
		int photoTaken = 1;

		for (int i=1; i<N; i++) {
			int count = 0;
			int len = setE.size();
			for (int j=0; j<len; j++) {
				if (bersinggungan(arr[i], setE[j])) {
					count++;
				}
			}
			if (count==len) {
				setE.push_back(arr[i]);
			}
			else {
				photoTaken++;
				vector<data> nn;
				nn.push_back(arr[i]);
				setE = nn;
			}
		}		

		printf("%d\n",photoTaken);
	}
	return 0;
}