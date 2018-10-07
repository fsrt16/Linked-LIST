#include<iostream>
const int m=10;
using namespace std;
class S{
	private:
		int a[m];
int t;
public : 
S();
void push(int n);
int pop();
~S();
};
S::S(){
	t=-1;
}
void S::push(int n){
	if(t==m-1){
		cout<<"stack fll"<<endl;
		return;
	}
	t++;
	a[t]=n;
	
}
int S::pop(){
	if(t==-1){
		cout<<"EMPTY   "<<endl;
		return 0;
	}
	int d=a[t];
	t--;
	return d;
}
S::~S(){
	
}

int main(){
	S a1;
int t,a,b;
char pos[20];
cout<<"enter a postfix expression :  "<<endl;
cin.getline(pos,20);
int i=0,j=0;


while(pos[i]!='\0'){
	if(pos[i]=='+'||pos[i]=='-'||pos[i]=='*'||pos[i]=='/')
	{    	a=a1.pop();
    	b=a1.pop();
    	
    	switch(pos[i]){
    		case '+': {
                     a1.push(a+b);    			
				break;
			}
				case '-': {
                     a1.push(b-a);    			
				break;
			}
				case '*': {
                     a1.push(a*b);    			
				break;
			}
				case '/': {
                     a1.push(b/a);    			
				break;
			}
		}
		i++;
	}

		
    else{
    		t=0;  
			cout<<pos[i]<<"  ";		   		
				t=(pos[i]-48);
		i++;	
		
			
		a1.push(t);
        		

}
}
	cout<<endl<<a1.pop()<<endl;
	return 0;
}

