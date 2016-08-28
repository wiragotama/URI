//URI 1284 cellphone typing
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

class Tree {
public:
	int depth;
	char character;
	bool ending;
	vector<Tree> children;

	Tree() {
		depth = 0;
		character = '_';
		ending = false;
	}

	Tree(int d, char ch, bool e) {
		depth = d;
		character = ch;
		ending = e;
	}

	void printT() {
		for (int i=0; i<depth*4; i++)
			cout << " ";
		cout << character << "(" << depth << ")" << "flag="<< ending << endl;
		if (children.size() > 0) {
			for (int i=0; i<children.size(); i++) {
				children[i].printT();
			}
		}
	}

	void traverseAddChild(string str, int strPointer, int len) {
		if (strPointer < len) {
			bool found = false;
			for (int i=0; i<children.size(); i++) {
				if (children[i].character == str[strPointer]) {
					found = true;
					children[i].traverseAddChild(str, strPointer+1, len);
					break;
				}
			}

			//not found
			if (!found) {
				Tree newChild(depth+1, str[strPointer], strPointer==len-1);
				children.push_back(newChild);
				children[children.size()-1].traverseAddChild(str, strPointer+1, len);
			}
		}
		else {
			ending = true;
			return;
		}
	}

	int countTyping(string str, int strPointer, int len, int ans) {
		if (strPointer < len) {
			if (depth==0) {
				int retval;
				bool found = false;
				for (int i=0; i<children.size() && !found; i++) {
					if (children[i].character == str[strPointer]) {
						found = true;
						retval = children[i].countTyping(str, strPointer+1, len, ans+1);
					}
				}
				return retval;
				// return 0;
			}
			else {
				if (children.size()==1) {
					if (ending) {
						return children[0].countTyping(str, strPointer+1, len, ans+1);
					}
					else {
						return children[0].countTyping(str, strPointer+1, len, ans);
					}
				}
				else {
					int retval;
					bool found = false;
					for (int i=0; i<children.size() && !found; i++) {
						if (children[i].character == str[strPointer]) {
							found = true;
							retval = children[i].countTyping(str, strPointer+1, len, ans+1);
						}
					}
					return retval;
				}
				// return 0;
			}
		}
		else {
			return ans;
		}
	}
};

int main() {
	int n;
	while (scanf("%d",&n)==1) {
		getchar();

		string str;
		Tree suffixTree;
		vector<string> input;

		for (int i=0; i<n; i++) {
			getline(cin, str);
			input.push_back(str);
			// cout << str << endl;
			suffixTree.traverseAddChild(str, 0, str.length());
		}
		// suffixTree.printT();

		double average = 0.0;
		for (int i=0; i<n; i++) {
			int typing = suffixTree.countTyping(input[i], 0, input[i].length(), 0);
			average += (double)typing;
			// cout << typing << endl;
		}
		printf("%.2lf\n",average/n);

		// break;
	}
	return 0;
}