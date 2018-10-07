//Conversion of Infix to postfix
/* If the current symbol is an operand, add it to postfix string
   If the current symbol is an operator then
     i) if the stack is empty or s[top] is '(' then push current symbol onto the stack
	 ii) if the current symbol is ')' then pop all the operators from stack until s[top] is '(' add these operators to postfix string
	 iii) else pop the operator (and add it to postfix) from the stack until the precedence of the scanned operator is less-equal to the precedence of the operator residing on the top of the stack. Push the scanned operator to the stack.*/
	//Assumption 1: No spaces in Infix string
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
char stack[20];
int top=-1;
void push(char ch)
{
	top++;
	stack[top]=ch;
}
char pop()
{
	char ch=stack[top];
	top--;
	return ch;
}
int op(char ch) //returns precedence of operator
{
	switch(ch)
	{
		case '+':
		case '-': return 1;
		case '/':
		case '*': 
		case '%': return 2;
	}
}
int main()
{
	char post[20],infix[20];
	cout<<"enter a infix string";
	cin.getline(infix,20);
	int i=0,j=0;
	while(i<strlen(infix))
	{
		if(isalpha(infix[i]))//operand add to postfix
			post[j++]=infix[i];
		else
		{
			if(top==-1||stack[top]=='(')// see point#ii
				push(infix[i]);
			else if(infix[i]==')')//until stack[top]='(' pop and add to post
			{
				do{
					post[j++]=pop();
				 }while(stack[top]!='(');
				 pop();//popping '(' without adding it to post string
			}
			else if (op(infix[i])<=op(stack[top]))//see point#iii
			{
				do{
					post[j++]=pop();
				 }while(op(infix[i])<=op(stack[top])&&top!=-1&&stack[top]!='(');
				 push(infix[i]); //store current symbol on top of stack
			}
			else//It will push it in the stack 
			{
				push(infix[i]);
			}
			
		}
		i++;
	}//end of while
	//add the remainder of stack elemnets to post
	while(top!=-1)
		post[j++]=pop();
	//make post as a string by appending '\0'
	post[j++]='\0';
	cout<<"The equivalent postfix expression of infix expression is:"<<endl<<post;
	return 0;
}
	
			
		
		
