//uri 1077 infix to postfix
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

//functions
void initialize();
bool operator_char(char x);
void push_postfix (char x);
void push_stack (char x);
void pop_stack(char& x);
bool empty(int a);
void get_ISP_ICP(char x, int& ISP, int& ICP);
void print(int top);

//variables
int 	p, ICP, ISP, i, n, len, stack_top, postfix_top;
char 	tmp, ch, stack[1001];
char 	postfix[1001];
string 	str; 

//main program
int main() {
	scanf("%d",&n); scanf("%c",&ch);
	for (i=1; i<=n; i++) {
		stack_top=-1;
		postfix_top=-1;
		getline (cin,str);
		cout<<str<<endl;
		len=str.length();
		cout<<len<<endl;
		p=0;
		while (p<len) {
			ch=str[p];
			cout<<p<<' '<<ch<<endl;
				if (ch==')') {
					pop_stack(tmp);
					while (tmp!='(') {
						pop_stack(tmp);
						if (tmp!='(')
							push_postfix(tmp);
					}
				}
				if (operator_char(ch)) {
					get_ISP_ICP(ch,ISP,ICP);
					if (ICP>ISP) 
						push_postfix(ch);
					else {
						while ((ICP<=ISP) && (!empty(stack_top))) {
							pop_stack(tmp);
							if (!empty(stack_top))
								get_ISP_ICP(tmp,ISP,ICP);
							push_postfix(tmp);
						}
					}
				}
				else {
					push_postfix(ch);
				}
			p++;
			print(postfix_top);
			printf("\n");
		}
		while (!empty(stack_top)) {
			pop_stack(tmp);
			push_postfix(tmp);
		}
		print(postfix_top);
		printf("\n");
	}
	return 0;
}

void print(int top) {
	for (int p=0; p<=top; p++)  {
		printf("%c",postfix[p]);
	}
}

bool operator_char(char x) {
	if ( (x=='^') || (x=='*') || (x=='/') || (x=='+') || (x=='-') ) {
		return true;
	}
	else return false;
}

void initialize() {
	stack_top=-1;
	postfix_top=-1;
}

void push_postfix (char x) {
	postfix_top++;
	postfix[postfix_top]=x;
}

void push_stack (char x) {
	stack_top++;
	stack[stack_top]=x;
}

void pop_stack(char& x) {
	x=stack[stack_top];
	stack_top--;
}

bool empty(int a) {
	if (a==0)
		return true;
	else return false;
}

void get_ISP_ICP(char x, int& ISP, int& ICP) {
	if (x=='^') {
		ISP=3; ICP=4;
	}
	else if ( (x=='*') || (x=='/') ) {
		ISP=2; ICP=2;
	}
	else if ( (x=='+') || (x=='-') ) {
		ISP=1; ICP=1;
	}
}
