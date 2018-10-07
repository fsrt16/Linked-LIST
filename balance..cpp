//Program to check balancing of symbols
/*Scan the expression string input.
    a) If the current character is a starting bracket (‘(‘ or ‘{‘ or ‘[‘) then push it to stack.
    b) If the current character is a closing bracket (‘)’ or ‘}’ or ‘]’) then pop from stack and if the popped character is the matching starting bracket then fine else parenthesis are not balanced.
3) After complete traversal, if there is some starting bracket left in stack then “not balanced”*/
#include<iostream>
using namespace std;
char stack[20];
int top=-1;
void push(char ch)
{
	top++;
	stack[top]=ch;
}
void pop()
{
	top--;
}
int main()
{
	char input[20];
	int flag=1;
	cout<<"enter a string to check";
	cin>>input;//Assume that no spaces in input string
	int i=0;
	while(input[i]!='\0')
	{
		if(input[i]=='{'||input[i]=='('||input[i]=='[')
			push(input[i]);
		else
		{
			if(top!=-1)
			{
				if(input[i]=='}'&&stack[top]=='{')
				pop();
				else if(input[i]==']'&&stack[top]=='[')
				pop();
				else if(input[i]==')'&&stack[top]=='(')
				pop();
				else //if the current symbol is closed symbol and stack is empty imbalanced
				{
					flag=0;
					break;
				}
			}
			else //current symbol not matching with top of stack
			{
				flag=0;
				break;
			}
		}
		i++;
	}
	if(top==-1&&flag==1)
		cout<<"Balanced";
	else
		cout<<"Imbalanced";
}	
				
				
