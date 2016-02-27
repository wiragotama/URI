#include <iostream>
#include <cstdio>
#include <sstream>

#define SSTR( x ) dynamic_cast< std::ostringstream & >( \
( std::ostringstream() << std::dec << x ) ).str()

using namespace std;

int main() {
	long double a;
	scanf("%LE", &a);

	std::string s = SSTR(a); 
	if (s[0]!='-') {
		printf("+");
	}
	printf("%.4LE\n", a);
	return 0;
}