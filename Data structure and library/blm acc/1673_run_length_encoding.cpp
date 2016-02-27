//URI 1673 run length encoding
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() 
{
	string str;
	while (getline(cin, str)) 
	{
		int len = str.length();
		string result = "";
		if (len==1) {
			result += '1';
			if (str[0]=='1') {
				result += '1';
			}
			result += str[0];
			result += '1';
		}
		else {
			int i = 1;
			while (i<len) 
			{
				if (str[i]==str[i-1]) { //ada occurance sebelumnya
					int count = 1;
					while (i<len && str[i]==str[i-1]) {
						i++;
						count++;
					}
					//udah ngga sama
					while (count>9) {
						result += '9' + str[i-1];
						count -= 9;
					}
					result += ('0'+(char)count-(char)0);
					result += str[i-1];
					i++;
				}
				//ini munculnya 1 biji 1 biji aja
				else {
					result += '1';
					if (str[i-1]=='1') {
						result += '1';
					}
					while (i<len && str[i]!=str[i-1]) {
						result += str[i-1];
						i++;
					}
					if (i==len && str[len-1]!=str[len-2]) 
						result += str[len-1];
					result += '1';
					//ada occurance yg sama
				}
			}
		}
		cout << result << endl;
	}
	return 0;
}