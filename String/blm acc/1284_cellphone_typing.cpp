//URI 1284 cellphone typing
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

class Tree {
	public:
		Tree() {
			depth = 0;
			character = '_';
			flag = false;
		}

		Tree(int d, char ch, bool f) {
			depth = d;
			character = ch;
			flag = f;
		}

		void printT() {
			for (int i=0; i<depth*4; i++)
				cout << " ";
			cout << character << "(" << depth << ")" << "flag="<< flag << endl;
			if (children.size() > 0) {
				for (int i=0; i<children.size(); i++) {
					children[i].printT();
				}
			}
		}

		int countTyping(string str, int stringPointer, int ans) {
			if (stringPointer < str.length()) {
				//cout << character << "(" << depth << ") " << " " << ans << endl;
				if (flag)
					ans += 1;

				if (children.size() == 1) {
					//cout << "children is only 1" << endl;
					return children[0].countTyping(str, stringPointer+1, ans);
				}
				else {
					int retval = 0;
					for (int i=0; i<children.size(); i++) {
						if (children[i].character == str[stringPointer]) {
							//cout << "masuk sini harusnya " << ans+1 << endl;
							retval =  children[i].countTyping(str, stringPointer+1, ans+1);
							break;
						}
					}
					return retval;
				}
			}
			else {
				//cout << character << "(" << depth << ") " << " " << ans << endl;
				// if (flag && children.size()>0)
				// 	ans++;
				return ans;
			}
		}

		void static addT(Tree &t, string str, int stringPointer) {
			if (stringPointer < str.length()) {
				//cout << stringPointer << " " << str.length() << " " << str[stringPointer] << endl;
				Tree child(t.depth+1, str[stringPointer], stringPointer+1==str.length());
				t.children.push_back(child);
				addT(t.children[t.children.size()-1], str, stringPointer+1);
			}
			else return;
		}

		void static traverseAddChild(Tree &t, string str, int stringPointer) {
			if (stringPointer >= str.length()) {
				t.flag = true;
				return;
			}
			else {
				bool found = false;
				for (int i=0; i<t.children.size(); i++) {
					if (t.children[i].character == str[stringPointer]) {
						traverseAddChild(t.children[i], str, stringPointer+1);
						found = true;
						break;
					}
				}
				if (!found) {
					addT(t, str, stringPointer);
				}
			}
		}

		int depth;
		char character;
		bool flag; //possible as ending
		vector<Tree> children;
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
			//cout << str << endl;
			Tree::traverseAddChild(suffixTree, str, 0);
		}
		//suffixTree.printT();

		double average = 0.0;
		for (int i=0; i<n; i++) {
			int typing = suffixTree.countTyping(input[i], 0, 0);
			average += max((double)typing, 1.0);
			//cout << typing << endl;
		}
		printf("%.2lf\n",average/n);

		//break;
	}
	return 0;
}