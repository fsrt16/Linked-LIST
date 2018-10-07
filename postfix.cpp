#include<iostream>
using namespace std;
int top=-1,stack[20];
void push(int item)
{
	if(top==19)
     cout<<"stack is full";
    else
    {
    	top=top+1;
    	stack[top]=item;
	}
}
int pop()
{
	if(top==-1)
	cout<<"stack is empty";
	else
	{
		int t=stack[top];
		top--;
		return t;
	}
	
}
bool op(char C)

{

	if(C == '+' || C == '-' || C == '*' || C == '/' || C== '$')

		return true;



	return false;

}
int main()
{
	bool op(char c);
	char infix[20],post[20];
	cout<<"enter an infix string ";
	cin>>infix;
	int i=0,j=0;
	while(infix[i]!='\0')
	{
		if(isalpha(infix[i]))
		{
			post[j++]=infix[i];
		}
		else if(infix[i]=='(')
		{
			push(infix[i]);
			i++;
		}
		else if(infix[i]==')')
		{
			cout<<"op"<<endl;
			do
			{
				post[i++]=pop();
			}
			while(stack[i]!='(');
			{
				pop();
			}
		}
		else
		{
			if(top==-1&&stack[top]=='(')
			{
				push(infix[i]);
			}
			else if(op(infix[i])<=op(stack[top]))
			{
				do
				{
					post[j++]=pop();
				}
				while(op(infix[i])<=op(stack[top])&&(top!=-1)&&stack[top]!='(');
				{
					push(infix[i]);
				}
			}
			else
			push(infix[i]);
		}
		i++;
	}
	while(top!=-1)
	{
		post[j++]=pop();
		cout<<post;
	}
	post[j++]=0;
	return 0;
}

