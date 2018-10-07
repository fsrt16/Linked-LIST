#include<iostream>
const int m=10;
using namespace std;
char n[20];
int i=0;
class S{
	private:
		int a[m];
int t;
public : 
S();
void push(char n);
int pop();
~S();
};
S::S(){
	t=-1;
}
void S::push(char n){
char m1[30];
	if(t==m-1){
		cout<<"stack fll"<<endl;
		return;
	}
	t++;
	a[t]=n;
	int k=i;
	if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'){
		if(t==1){
			if(a[0]=='+'||a[0]=='-'){
			 n[2]=a[1];
			 k++;
			}
			else if(a[0]=='*'||a[0]=='/'){
				if(a[1]=='+'||a[1]=='-'){
					m1[0]=a[0];
					a[0]=a[1];
					a[1]=m1[0];
					
					n[2]=a[1];
					k++;
				}
			}
		}
	}

	
}
int S::pop(){
	if(t==-1){
		cout<<"EMPTY   "<<endl;
		return 0;
	}
	char d=a[t];
	t--;
	return d;
}
S::~S(){
	
}
int main(){ S a1;
	char a[20];
	cout<<"ENTER AN INFLIX STRING  :  "<<endl;
	cin.getline(a,20);
	
	while(a[i]!='\0'){
		if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='('||a[i]==')'){
			a1.push(a[i]);	
		}	
		else{
			
			n[i]=a[i];
			
			i++;
		}
		
		
		
		
		
		
		
	}
	int j=0;
	while(n[j]!='\0')
	{
		
		cout<<n[j];
	}
	
	
return 0;	
}


